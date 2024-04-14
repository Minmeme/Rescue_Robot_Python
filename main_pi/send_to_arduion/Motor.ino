void KaFL(int Lspeed) {
  if (Lspeed > 0){
    digitalWrite(Ain1, LOW);
    digitalWrite(Ain2, HIGH);
    analogWrite(PwmA, Lspeed);
  }
  else if (Lspeed < 0){
    digitalWrite(Ain1, HIGH);
    digitalWrite(Ain2, LOW);
    analogWrite(PwmA, abs(Lspeed));
  }
  else if (Lspeed == 0){
    digitalWrite(Ain1, LOW);
    digitalWrite(Ain2, LOW);
    analogWrite(PwmA, Lspeed);
  }
}

void KaFR(int Rspeed){
     if (Rspeed > 0){
    digitalWrite(Bin1, LOW);
    digitalWrite(Bin2, HIGH);
    analogWrite(PwmB, Rspeed);
  }
  else if (Rspeed < 0){
    digitalWrite(Bin1, HIGH);
    digitalWrite(Bin2, LOW);
    analogWrite(PwmB, abs(Rspeed));
  }
  else if (Rspeed == 0){
    digitalWrite(Bin1, LOW);
    digitalWrite(Bin2, LOW);
    analogWrite(PwmB, Rspeed);
  }
 }

void MotorR(int Speed){
    if (Speed > 0){
    digitalWrite(Cin1, HIGH);
    digitalWrite(Cin2, LOW);
    analogWrite(PwmC, Speed);
  }
  else if (Speed < 0){
    digitalWrite(Cin1, LOW);
    digitalWrite(Cin2, HIGH);
    analogWrite(PwmC, abs(Speed));
  }
  else if (Speed == 0){
    digitalWrite(Cin1, LOW);
    digitalWrite(Cin2, LOW);
    analogWrite(PwmC, Speed);
  }
 }

void MotorL(int Speed){
    if (Speed > 0){
    digitalWrite(Din1, LOW);
    digitalWrite(Din2, HIGH);
    analogWrite(PwmD, Speed);
  }
  else if (Speed < 0){
    digitalWrite(Din1, HIGH);
    digitalWrite(Din2, LOW);
    analogWrite(PwmD, abs(Speed));
  }
  else if (Speed == 0){
    digitalWrite(Din1, LOW);
    digitalWrite(Din2, LOW);
    analogWrite(PwmD, Speed);
  }
 }

void MotorStopAll(){
    digitalWrite(Ain1, LOW);
    digitalWrite(Ain2, LOW);
    analogWrite(PwmA, 0);

    digitalWrite(Bin1, LOW);
    digitalWrite(Bin2, LOW);
    analogWrite(PwmB, 0);

    digitalWrite(Cin1, LOW);
    digitalWrite(Cin2, LOW);
    analogWrite(PwmC, 0);

    digitalWrite(Din1, LOW);
    digitalWrite(Din2, LOW);
    analogWrite(PwmD, 0);
  }
