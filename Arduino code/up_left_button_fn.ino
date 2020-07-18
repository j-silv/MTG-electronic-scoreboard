//Increase the lifepoints for Player 1
void GoUpLeft()
{
  //If at the last decimal value (09, 19, 29, etc.)
  if( ValueDigit2==9 && ValueDigit1 !=9 )
  {
    ValueDigit1+=1;
    ValueDigit2=0;
  }
  else
  {
  if(ValueDigit2<9)
  {
    ValueDigit2+=1;
  }
  }
}

//=====================is the up left button pushed?=======================//
void ReadUpLeft()     
{
  if  (  digitalRead(UpLeft) == LOW && UpLeftPressed == false && UpLeftFastGo ==false  )
  {
    UpLeftPressed = true;
    UpLeftTimer=CurrentTimer;
    UpLeftHeldTimer=CurrentTimer;
  }
}

//============check to see if player is still holding down upleft button===================//
void ReadUpLeftNotHeld()
{
  if (digitalRead(UpLeft) == HIGH && (UpLeftPressed)  )
  {
   UpLeftPressed = false;
   UpLeftNotHeld = true;
  }                                                                           
  else
  {
    return; 
  }
}

//===========normal speed life point decrease==============================//
void GoUpLeftNormal()
{
  if ( (UpLeftNotHeld) && (CurrentTimer - UpLeftTimer) >= UpLeftDelay )
  {
   GoUpLeft();
   UpLeftNotHeld=false;
  }
else
{
  return;
}
}

//================check to see if rapid point cycling is wanted==============================//
void ReadUpLeftHeld()
{
if  (  (UpLeftPressed) && (CurrentTimer - UpLeftHeldTimer) >= UpLeftIsHeld )
{
UpLeftPressed=false;
UpLeftFastGo=true;
UpLeftHeldTimer=CurrentTimer;
}
//==============if player lets go too soon, don't rapid point cycle============//
if (digitalRead(UpLeft) == HIGH )
{
  UpLeftPressed=false;
}

else
{
  return;
}
}

//================we have ok from readupleftheld now we can go rapid point cycle==============================//
void GoUpLeftFast()
{
if ( (UpLeftFastGo) && digitalRead(UpLeft) == LOW && (CurrentTimer - UpLeftHeldTimer) >= UpLeftFastDelay )

{
  GoUpLeft();
  UpLeftHeldTimer=CurrentTimer;
}

if (digitalRead(UpLeft) == HIGH)
  {
    UpLeftFastGo=false;
    UpLeftPressed=false;
  }

else
{
  return;
}
}
