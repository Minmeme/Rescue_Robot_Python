from smbus import SMBus
import socket
import time

# make sure it same ip in server  
HOST = '192.168.1.19'  # Change this to your computer IP
PORT = 5000  # Change this to your desired port

I2C_ADDRESS = 0x8
bus = SMBus(1)
    
def connect_to_server():
    global client_socket, Button
    try:
        client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        client_socket.connect((HOST, PORT))
        # bus.write(I2C_ADDRESS, 0x100) # set servo
        while True:
            data = client_socket.recv(1024)
            if not data:
                break
            Button = data.decode('utf-8')
            print(Button)
            #################################
            if Button == 'A':
                bus.write_byte(I2C_ADDRESS, 0x1)
                print(Button)

            elif Button == 'B':
                bus.write_byte(I2C_ADDRESS, 0x2)
                print(Button)

            elif Button == 'X':
                bus.write_byte(I2C_ADDRESS, 0x3)
                print(Button)

            elif Button == 'Y':
                bus.write_byte(I2C_ADDRESS, 0x4)
                print(Button)
 
            # #################################
            elif Button == 'R1':
                bus.write_byte(I2C_ADDRESS, 0x5)
                print(Button)

            elif Button == 'R2':
                bus.write_byte(I2C_ADDRESS, 0x6)
                print(Button)

            elif Button == 'L1':
                bus.write_byte(I2C_ADDRESS, 0x7)
                print(Button)

            elif Button == 'L2':
                bus.write_byte(I2C_ADDRESS, 0x9)
                print(Button)

            # #################################
            elif Button == 'Hat_Up':
                bus.write_byte(I2C_ADDRESS, 0x10)
                print(Button)

            elif Button == 'Hat_Down':
                bus.write_byte(I2C_ADDRESS, 0x11)
                print(Button)

            elif Button == 'Hat_L':
                bus.write_byte(I2C_ADDRESS, 0x12)
                print(Button)

            elif Button == 'Hat_R':
                bus.write_byte(I2C_ADDRESS, 0x13)
                print(Button)

            # #################################
            elif Button == 'ButtonLX1':
                bus.write_byte(I2C_ADDRESS, 0x14)
                print(Button)

            elif Button == 'ButtonLX-1':
                bus.write_byte(I2C_ADDRESS, 0x15)
                print(Button)

            elif Button == 'ButtonLY1':
                bus.write_byte(I2C_ADDRESS, 0x16)
                print(Button)

            elif Button == 'ButtonLY-1':
                bus.write_byte(I2C_ADDRESS, 0x17)
                print(Button)

            #################################
            elif Button == 'ButtonRX1':
                bus.write_byte(I2C_ADDRESS, 0x18)
                print(Button)

            elif Button == 'ButtonRX-1':
                bus.write_byte(I2C_ADDRESS, 0x19)
                print(Button)

            elif Button == 'ButtonRY1':
                bus.write_byte(I2C_ADDRESS, 0x20)
                print(Button)

            elif Button == 'ButtonRY-1':
                bus.write_byte(I2C_ADDRESS, 0x21)
                print(Button)

            #################################
            elif Button == 'ButtonRX-1':
                bus.write_byte(I2C_ADDRESS, 0x22)
                print(Button)

            elif Button == 'ButtonRY1':
                bus.write_byte(I2C_ADDRESS, 0x23)
                print(Button)

            ################################# LY and RY
            elif Button == 'LYDown_and_RYDown':
                bus.write_byte(I2C_ADDRESS, 0x24)
                print(Button)

            elif Button == 'LYUp_and_RYUp':
                bus.write_byte(I2C_ADDRESS, 0x25)
                print(Button)

            elif Button == 'LYDown_and_RYUp':
                bus.write_byte(I2C_ADDRESS, 0x26)
                print(Button)

            elif Button == 'LYUp_and_RYDown':
                bus.write_byte(I2C_ADDRESS, 0x27)
                print(Button)

            #################################

            elif Button == 'ButtonL':
                bus.write_byte(I2C_ADDRESS, 0x28)
                print(Button)

            elif Button == 'ButtonR':
                bus.write_byte(I2C_ADDRESS, 0x29)
                print(Button)

            # #################################
            elif Button == 'Stop':
                bus.write_byte(I2C_ADDRESS, 0x100)
                print(Button)

    except Exception as e:
        print("An error occurred:",e)

connect_to_server()
