//Decrease the lifepoints for Player 2
void GoDownRight()
{
  //If at the last decimal value (90, 80, 70, etc.)
  if( ValueDigit4==0 && ValueDigit3 !=0 )
  {
    ValueDigit3-=1;
    ValueDigit4=9;
  }
  else
  {
  if(ValueDigit4>0)
  {
    ValueDigit4-=1;
  }
  }
}


//=====================is the down right button pushed?=======================//
void ReadDownRight()     
{
  if  (  digitalRead(DownRight) == LOW && DownRightPressed == false && DownRightFastGo ==false  )
  {
    DownRightPressed = true;
    DownRightTimer=CurrentTimer;
    DownRightHeldTimer=CurrentTimer;
  }
}


//============check to see if player is still holding down downright button===================//
void ReadDownRightNotHeld()
{
  if (digitalRead(DownRight) == HIGH && (DownRightPressed)  )
  {
   DownRightPressed = false;
   DownRightNotHeld = true;
  }                                                                           
  else
  {
    return; 
  }
}

//===========normal speed life point decrease==============================//
void GoDownRightNormal()
{
  if ( (DownRightNotHeld) && (CurrentTimer - DownRightTimer) >= DownRightDelay )
  {
   GoDownRight();
   DownRightNotHeld=false;
  }
else
{
  return;
}
}


//================check to see if rapid point cycling is wanted==============================//
void ReadDownRightHeld()
{
if  (  (DownRightPressed) && (CurrentTimer - DownRightHeldTimer) >= DownRightIsHeld )
{
DownRightPressed=false;
DownRightFastGo=true;
DownRightHeldTimer=CurrentTimer;
}
//==============if player lets go too soon, don't rapid point cycle============//
if (digitalRead(DownRight) == HIGH )
{
  DownRightPressed=false;
}

else
{
  return;
}
}

//================we have ok from readdownleftheld now we can go rapid point cycle==============================//
void GoDownRightFast()
{
if ( (DownRightFastGo) && digitalRead(DownRight) == LOW && (CurrentTimer - DownRightHeldTimer) >= DownRightFastDelay )

{
  GoDownRight();
  DownRightHeldTimer=CurrentTimer;
}

if (digitalRead(DownRight) == HIGH)
  {
    DownRightFastGo=false;
    DownRightPressed=false;
  }

else
{
  return;
}
}
