//Decrease the lifepoints for Player 1
void GoDownLeft()
{
  //If at the last decimal value (90, 80, 70, etc.)
  if( ValueDigit2==0 && ValueDigit1 !=0 )
  {
    ValueDigit1-=1;
    ValueDigit2=9;
  }
  else
  {
  if(ValueDigit2>0)
  {
    ValueDigit2-=1;
  }
  }
}

//=====================is the down left button pushed?=======================//
void ReadDownLeft()     
{
  if  (  digitalRead(DownLeft) == LOW && DownLeftPressed == false && DownLeftFastGo ==false  )
  {
    DownLeftPressed = true;
    DownLeftTimer=CurrentTimer;
    DownLeftHeldTimer=CurrentTimer;
  }
}

//============check to see if player is still holding down downleft button===================//
void ReadDownLeftNotHeld()
{
  if (digitalRead(DownLeft) == HIGH && (DownLeftPressed)  )
  {
   DownLeftPressed = false;
   DownLeftNotHeld = true;
  }                                                                           
  else
  {
    return; 
  }
}

//===========normal speed life point decrease==============================//
void GoDownLeftNormal()
{
  if ( (DownLeftNotHeld) && (CurrentTimer - DownLeftTimer) >= DownLeftDelay )
  {
   GoDownLeft();
   DownLeftNotHeld=false;
  }
else
{
  return;
}
}

//================check to see if rapid point cycling is wanted==============================//
void ReadDownLeftHeld()
{
if  (  (DownLeftPressed) && (CurrentTimer - DownLeftHeldTimer) >= DownLeftIsHeld )
{
DownLeftPressed=false;
DownLeftFastGo=true;
DownLeftHeldTimer=CurrentTimer;
}
//==============if player lets go too soon, don't rapid point cycle============//
if (digitalRead(DownLeft) == HIGH )          
{
  DownLeftPressed=false;
}

else
{
  return;
}
}

//================we have ok from readdownleftheld now we can go rapid point cycle==============================//
void GoDownLeftFast()
{
if ( (DownLeftFastGo) && digitalRead(DownLeft) == LOW && (CurrentTimer - DownLeftHeldTimer) >= DownLeftFastDelay )

{
  GoDownLeft();
  DownLeftHeldTimer=CurrentTimer;
}

if (digitalRead(DownLeft) == HIGH)
  {
    DownLeftFastGo=false;
    DownLeftPressed=false;
  }

else
{
  return;
}
}
