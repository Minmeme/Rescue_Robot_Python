this code for rescue robot

Precautions
1. make sure your joystick connect with computer
2. make sure your device connect the same wifi (pi and computer must be connect to the same wifi)
3. cheak ip in Pi and computer in my code
4. dowload my coed in your computer and your raspberry pi

Set up
#
    On computer: # strat server.py
        1. open cmd
        2. run code server.py # in compettion if it's not necessary. i am not recommend to stop this code Because ip are overlapped
            - cd your file addr/Rescue_Fn_test/ # open folder
            - python3 server.py  # run server.py

    On Pi :  # control thougt cmd(computer)
        1. open cmd # make sure your pi and computer must be connect to the same wifi
        2. connect Pi # use ssh
            - ssh <username>@<Pi-ip> -p port 
        3. run code
            - cd your file addr/Rescue_Fn_test/main_pi/Pi_client # open folder
            - choose the code to run # if you want to run any code plz ctrl+C(stop code) and run new code
                - python3 main-cam.py # this code for simple cam(no imagepro)
                - python3 main-qr.py # this code for Qrcode detect
                # if you run code is passes in output it have link to web(show camera) plz open link to see camera
                # if you run code is passes plz ctrl+C to let pi connect to server.
                
                # if have error plz read error and edit it 
                # if you want to edit my code use nano <flie you want to edit>

     On mage :
        1. uploed send_to_arduion.ino # don t forget chenge my code to macth your robot
        

 
