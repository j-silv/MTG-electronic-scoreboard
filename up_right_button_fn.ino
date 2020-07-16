//Increase the lifepoints for Player 2
void GoUpRight()
{
  //If at the last decimal value (09, 19, 29, etc.)	
  if( ValueDigit4==9 && ValueDigit3 !=9 )
  {
    ValueDigit3+=1;
    ValueDigit4=0;
  }
  else
  {
  if(ValueDigit4<9)
  {
    ValueDigit4+=1;
  }
  }
}

//=====================is the up right button pushed?=======================//
void ReadUpRight()     
{
  if  (  digitalRead(UpRight) == LOW && UpRightPressed == false && UpRightFastGo ==false  )
  {
    UpRightPressed = true;
    UpRightTimer=CurrentTimer;
    UpRightHeldTimer=CurrentTimer;
  }
}

//============check to see if player is still holding down upright button===================//
void ReadUpRightNotHeld()
{
  if (digitalRead(UpRight) == HIGH && (UpRightPressed)  )
  {
   UpRightPressed = false;
   UpRightNotHeld = true;
  }                                                                           
  else
  {
    return; 
  }
}

//===========normal speed life point decrease==============================//
void GoUpRightNormal()
{
  if ( (UpRightNotHeld) && (CurrentTimer - UpRightTimer) >= UpRightDelay )
  {
   GoUpRight();
   UpRightNotHeld=false;
  }
else
{
  return;
}
}

//================check to see if rapid point cycling is wanted==============================//
void ReadUpRightHeld()
{
if  (  (UpRightPressed) && (CurrentTimer - UpRightHeldTimer) >= UpRightIsHeld )
{
UpRightPressed=false;
UpRightFastGo=true;
UpRightHeldTimer=CurrentTimer;
}

//==============if player lets go too soon, don't rapid point cycle============//
if (digitalRead(UpRight) == HIGH )
{
  UpRightPressed=false;
}

else
{
  return;
}
}

//================we have ok from readuprightheld now we can go rapid point cycle==============================//
void GoUpRightFast()
{
if ( (UpRightFastGo) && digitalRead(UpRight) == LOW && (CurrentTimer - UpRightHeldTimer) >= UpRightFastDelay )

{
  GoUpRight();
  UpRightHeldTimer=CurrentTimer;
}

if (digitalRead(UpRight) == HIGH)
  {
    UpRightFastGo=false;
    UpRightPressed=false;
  }

else
{
  return;
}
}