void ReceiveEvent() { // check clinet send
  while (Wire.available()) { // loop through all but the last
    int Data = Wire.read(); // receive byte as a character
    //digitalWrite(LED_BUILTIN, c);
    //Serial.println(Data);
    if (Data == 0x1) {
      Serial.println("A");
    }
    else if (Data == 0x2) {
      Serial.println("B");
    }
    else if (Data == 0x3) {
      Serial.println("X");
    }
    else if (Data == 0x4) {
      Serial.println("Y");
    }

    else if (Data == 0x5) {
      Serial.println("R1");
    }
    else if (Data == 0x6) {
      Serial.println("R2");
    }

    else if (Data == 0x7) {
      Serial.println("L1");
    }
    else if (Data == 0x9) {
      Serial.println("L2");
    }

    else if (Data == 0x10) {
      Serial.println("Hat_Up");
    }
    else if (Data == 0x11) {
      Serial.println("Hat_Down");
    }
      
    else if (Data == 0x12) {
      Serial.println("Hat_L");
    }
      
    else if (Data == 0x13) {
      Serial.println("Hat_R");
    }

    else if (Data == 0x14) {
      Serial.println("LX1"); // log servo
    }

    else if (Data == 0x15) {
      Serial.println("LX-1");// log servo
    }

    else if (Data == 0x16) {
      Serial.println("LY1");
    }
    else if (Data == 0x17) {
      Serial.println("LY-1");
    }

    else if (Data == 0x18) {
      Serial.println("RX1");
    }
    else if (Data == 0x19) {
      Serial.println("RX-1");
    }

    else if (Data == 0x20) {
      Serial.println("RY1");
    }
    else if (Data == 0x21) {
      Serial.println("RY-1");
    }

    else if (Data == 0x22) {
      Serial.println("start");
    }
      
    else if (Data == 0x23) {
      Serial.println("back");
    }

    else if (Data == 0x24) {
      Serial.println("LYDown_and_RYDown");
    }
    else if (Data == 0x25) {
      Serial.println("LYUp_and_RYUp");
    }
    else if (Data == 0x26) {
      Serial.println("LYDown_and_RYUp");;
    }
    else if (Data == 0x27) {
      Serial.println("LYUp_and_RYDown");
    }

    //    else if (Data == 0x28) {
    //      Serial.println("ButtonL");
    //    }
    //    else if (Data == 0x29) {
    //      Serial.println("ButtonR");
    //    }
    //
    //    else if (Data == 0x30) {
    //      Serial.println("L1 and R1");
    //    }
    //    else if (Data == 0x31) {
    //      Serial.println("L2 and R2");
    //    }

    else if (Data == 0x32) {
      SetServo();
      Serial.println("Center");
    }

    else if (Data == 0x33) {
      MotorStopAll();
      Serial.println("Stop");
    }
  }
}
