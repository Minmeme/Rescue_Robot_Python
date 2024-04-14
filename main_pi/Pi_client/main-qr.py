import cv2
import numpy as np
from flask import Flask, render_template, Response
from pyzbar.pyzbar import decode
from client import client
from multiprocessing import Process


app = Flask(__name__)

cap1=cv2.VideoCapture(1) # wedcam
cap=cv2.VideoCapture(0) # pi camera

count=0

def gen_frames():
    while True:
        success, frame = cap.read()
        if not success:
            break
        else:
            ret, buffer = cv2.imencode('.jpg', frame)
            frame = buffer.tobytes()
            yield (b'--frame\r\n'
                   b'Content-Type: image/jpeg\r\n\r\n' + frame + b'\r\n')

def gen_frames1():
    while True:
        success, frame = cap1.read()
        if not success:
            break
        else:
            for barcode in decode(frame):
                myData = barcode.data.decode('utf-8')
                print(myData)
                pts = np.array([barcode.polygon],np.int32)
                pts = pts.reshape((-1,1,2))
                cv2.polylines(frame,[pts],True,(255,0,255),5)
                pts2 = barcode.rect
                cv2.putText(frame,myData,(pts2[0],pts2[1]),cv2.FONT_HERSHEY_SIMPLEX, 0.9,(255,0,255),2)
                
            ret, buffer = cv2.imencode('.jpg', frame)
            frame = buffer.tobytes()
            yield (b'--frame\r\n'
                   b'Content-Type: image/jpeg\r\n\r\n' + frame + b'\r\n')

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/video_feed')
def video_feed():
    return Response(gen_frames(), mimetype='multipart/x-mixed-replace; boundary=frame')

@app.route('/video_feed1')
def video_feed1():
    return Response(gen_frames1(), mimetype='multipart/x-mixed-replace; boundary=frame')

if __name__ == "__main__":
    app.run(host='192.168.0.59', port=5050, threaded=True ,debug=False) # use Pi_pi
    joy = Process(target=client.connect_to_server)
    joy.start()