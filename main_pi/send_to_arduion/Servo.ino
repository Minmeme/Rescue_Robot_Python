void SetServo() {
  MyServo1.write(Degree1);
  MyServo2.write(Degree2);
  MyServo3.write(Degree3);
  MyServo4.write(Degree4);
  MyServo5.write(Degree5);
//  MyServo6.write(Degree6);
}

//////////////////////////////
void MyServo1_L() {
  if (Degree1 < 180)
  {
    MyServo1.write(Degree1);
    Degree1 += 3;
  }
  else if (Degree1 > 180)
  {
    Degree1 = 180;
  }
}

void MyServo1_R() {
  if (Degree1 > 0)
  {
    MyServo1.write(Degree1);
    Degree1 -= 3;
  }
  else if (Degree1 < 0)
  {
    Degree1 = 0;
  }
}

/////////////////////////
void MyServo2_L() {
  if (Degree2 < 180)
  {
    MyServo2.write(Degree2);
    Degree2 += 3;
  }
  else if (Degree2 > 180)
  {
    Degree2 = 180;
  }
}

void MyServo2_R() {
  if (Degree2 > 0)
  {
    MyServo2.write(Degree2);
    Degree2 -= 3;
  }
  else if (Degree2 < 0)
  {
    Degree2 = 0;
  }
}

////////////////////////////
void MyServo3_L() {
  if (Degree3 < 180)
  {
    MyServo3.write(Degree3);
    Degree3 += 3;
  }
  else if (Degree3 > 180)
  {
    Degree3 = 180;
  }
}

void MyServo3_R() {
  if (Degree3 > 0)
  {
    MyServo3.write(Degree3);
    Degree3 -= 3;
  }
  else if (Degree3 < 0)
  {
    Degree3 = 0;
  }
}

////////////////////////////////
void MyServo4_L() {
  if (Degree4 < 180)
  {
    MyServo4.write(Degree4);
    Degree4 += 3;
  }
  else if (Degree4 > 180)
  {
    Degree4 = 180;
  }
}

void MyServo4_R() {
  if (Degree4 > 0)
  {
    MyServo4.write(Degree4);
    Degree4 -= 3;
  }
  else if (Degree4 < 0)
  {
    Degree4 = 0;
  }
}

///////////////////////////
void MyServo5_L() {
  if (Degree5 < 180)
  {
    MyServo5.write(Degree5);
    Degree5 += 3;
  }
  else if (Degree5 > 180)
  {
    Degree5 = 180;
  }
}

void MyServo5_R() {
  if (Degree5 > 0)
  {
    MyServo5.write(Degree5);
    Degree5 -= 3;
  }
  else if (Degree5 < 0)
  {
    Degree5 = 0;
  }
}

///////////////////////////
void MyServo6_L() {
  if (Degree6 < 180)
  {
    MyServo6.write(Degree6);
    Degree6 += 3;
  }
  else if (Degree6 > 180)
  {
    Degree6 = 180;
  }
}

void MyServo6_R() {
  if (Degree6 > 0)
  {
    MyServo6.write(Degree6);
    Degree6 -= 3;
  }
  else if (Degree6 < 0)
  {
    Degree6 = 0;
  }
}
