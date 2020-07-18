void DigitsOff(){
  digitalWrite(Digit1,LOW);
  digitalWrite(Digit2,LOW);
  digitalWrite(Digit3,LOW);
  digitalWrite(Digit4,LOW);
}

void Display(unsigned char num) 
{
  digitalWrite(latch,LOW);
  shiftOut(data,clock,MSBFIRST,table[num]);
  digitalWrite(latch,HIGH);
}

//=======Flashing digits during game===========//
void Digit1Flash()
{
DigitsOff();
Display(ValueDigit1);
digitalWrite(Digit1,HIGH);  
delay(vision); 
}

void Digit2Flash()
{
DigitsOff();
Display(ValueDigit2);
digitalWrite(Digit2,HIGH);  
delay(vision); 
}

void Digit3Flash()
{
DigitsOff();
Display(ValueDigit3);
digitalWrite(Digit3,HIGH);  
delay(vision); 
}

void Digit4Flash()
{
DigitsOff();
Display(ValueDigit4);
digitalWrite(Digit4,HIGH);  
delay(vision); 
}

//=======Flashing digits during scrolling endgame message===========//
void FlashDigit1()
{
DigitsOff();
Display(ValueDigit1Lose);
digitalWrite(Digit1,HIGH);  

}

void FlashDigit2()
{
DigitsOff();
Display(ValueDigit2Lose);
digitalWrite(Digit2,HIGH);  

}

void FlashDigit3()
{
DigitsOff();
Display(ValueDigit3Lose);
digitalWrite(Digit3,HIGH);   

}

void FlashDigit4()
{
DigitsOff();
Display(ValueDigit4Lose);
digitalWrite(Digit4,HIGH);  

}
