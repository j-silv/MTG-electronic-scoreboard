//This function pauses before starting the scrolling endgame message and also notes which player lost
void EndOfGamePause()
{
if ( ValueDigit1 == 0 && ValueDigit2 == 0 )  
{
  DigitsOff();
  delay(3000);
  ___L1=true;
  //Player 1 lost so the 8th value in the scrolling endgame message is the number 1
  EighthLetter=1;
}

if ( ValueDigit3 == 0 && ValueDigit4 == 0 )  
{
  DigitsOff();
  delay(3000);
  ___L1=true;
  //Player 2 lost so the 8th value in the scrolling endgame message is the number 2
  EighthLetter=2;
}

}

/*Everything hear is kept in general letter 1, letter 2, letter 3, terms, so that this same algorithm could
  print any 14 character length string. It's just necessary to know what the LED segment information is, and 
  in the main.ino file, set up the first letter value, the second letter value, etc.
*/

void PlayerLose()
{ 

EndOfGamePause();

while ( (ValueDigit1 == 0 && ValueDigit2 == 0) || (ValueDigit3 == 0 && ValueDigit4 == 0) && (i < 5)  )
{  


CurrentTimer = millis();  


//==================___L1===========================//
if( (___L1) && (!__L1L2) && (!_L1L2L3) && (!L1L2L3L4) && (!L2L3L4L5) && (!L3L4L5L6)&& (!L4L5L6L7)&& (!L5L6L7L8) && (!L6L7L8L9) 
&& (!L7L8L9L10) && (!L8L9L10L11) && (!L9L10L11L12)&& (!L10L11L12L13)&& (!L11L12L13L14) && (!L12L13L14_) && (!L13L14__) && (!L14___) )
{
 ValueDigit4Lose=FirstLetter;
 FlashDigit4();
 ___L1=false;
 __L1L2=true;
 __L1L2Timer=CurrentTimer;
}




//===========================__L1L2=========================//
if( (CurrentTimer-__L1L2Timer) >= DelayBetweenScrolling && (!___L1) && (__L1L2) && (!_L1L2L3) && (!L1L2L3L4) && (!L2L3L4L5) && (!L3L4L5L6)&& (!L4L5L6L7) 
&& (!L5L6L7L8) && (!L6L7L8L9) && (!L7L8L9L10) && (!L8L9L10L11) && (!L9L10L11L12)&& (!L10L11L12L13)&& (!L11L12L13L14) && (!L12L13L14_) && (!L13L14__) && (!L14___) ) 

{
 __L1L2=false;
 _L1L2L3=true;
 
__L1onL2 =true;
__L1L2on =false;
 
 __L1L2Timer=CurrentTimer;
 _L1L2L3Timer=CurrentTimer;
}

Flash__L1L2();





//===========================_L1L2L3=========================//
if( (CurrentTimer-_L1L2L3Timer) >= DelayBetweenScrolling && (!___L1) && (!__L1L2) && (_L1L2L3) && (!L1L2L3L4) && (!L2L3L4L5) && (!L3L4L5L6) &&(!L4L5L6L7) && (!L5L6L7L8) 
&& (!L6L7L8L9) && (!L7L8L9L10) && (!L8L9L10L11) && (!L9L10L11L12)&& (!L10L11L12L13)&& (!L11L12L13L14) && (!L12L13L14_) && (!L13L14__) && (!L14___) ) 

{
__L1onL2 = false;
__L1L2on = false;

 _L1L2L3=false;
 L1L2L3L4=true;
 
_L1onL2L3=true;
_L1L2onL3=false;
_L1L2L3on=false;

 _L1L2L3Timer=CurrentTimer;
 L1L2L3L4Timer=CurrentTimer;
}

Flash_L1L2L3();




//===========================L1L2L3L4=========================//
if( (CurrentTimer-L1L2L3L4Timer) >= DelayBetweenScrolling && (!___L1) && (!__L1L2) && (!_L1L2L3) && (L1L2L3L4) && (!L2L3L4L5) && (!L3L4L5L6) && (!L4L5L6L7) && (!L5L6L7L8)  
&& (!L6L7L8L9) && (!L7L8L9L10) && (!L8L9L10L11) && (!L9L10L11L12)&& (!L10L11L12L13)&& (!L11L12L13L14) && (!L12L13L14_) && (!L13L14__) && (!L14___) ) 

{
_L1onL2L3=false;
_L1L2onL3=false;
_L1L2L3on=false;

 L1L2L3L4=false;
 L2L3L4L5=true;
 
L1onL2L3L4=true;
L1L2onL3L4=false;
L1L2L3onL4=false;
L1L2L3L4on=false;

 L1L2L3L4Timer=CurrentTimer;
 L2L3L4L5Timer=CurrentTimer;
}

FlashL1L2L3L4();




//===========================L2L3L4L5=========================//
if( (CurrentTimer-L2L3L4L5Timer) >= DelayBetweenScrolling && (!___L1) && (!__L1L2) && (!_L1L2L3) && (!L1L2L3L4) && (L2L3L4L5) && (!L3L4L5L6) &&(!L4L5L6L7) && (!L5L6L7L8) 
&& (!L6L7L8L9) && (!L7L8L9L10) && (!L8L9L10L11) && (!L9L10L11L12)&& (!L10L11L12L13)&& (!L11L12L13L14) && (!L12L13L14_) && (!L13L14__) && (!L14___) ) 

{
L1onL2L3L4=false;
L1L2onL3L4=false;
L1L2L3onL4=false;
L1L2L3L4on=false;


L2L3L4L5=false;
L3L4L5L6=true;
 
L2onL3L4L5=true;
L2L3onL4L5=false;
L2L3L4onL5=false;
L2L3L4L5on=false;



 L2L3L4L5Timer=CurrentTimer;
 L3L4L5L6Timer=CurrentTimer;
}

FlashL2L3L4L5();




//===========================L3L4L5L6=========================//
if( (CurrentTimer-L3L4L5L6Timer) >= DelayBetweenScrolling && (!___L1) && (!__L1L2) && (!_L1L2L3) && (!L1L2L3L4) && (!L2L3L4L5) && (L3L4L5L6)&& (!L4L5L6L7) && (!L5L6L7L8) 
&& (!L6L7L8L9) && (!L7L8L9L10) && (!L8L9L10L11) && (!L9L10L11L12)&& (!L10L11L12L13)&& (!L11L12L13L14) && (!L12L13L14_) && (!L13L14__) && (!L14___) ) 

{
L2onL3L4L5=false;
L2L3onL4L5=false;
L2L3L4onL5=false;
L2L3L4L5on=false;


L3L4L5L6=false;
L4L5L6L7=true;
 
L3onL4L5L6=true;
L3L4onL5L6=false;
L3L4L5onL6=false;
L3L4L5L6on=false;



 L3L4L5L6Timer=CurrentTimer;
 L4L5L6L7Timer=CurrentTimer;
}

FlashL3L4L5L6();




//===========================L4L5L6L7=========================//
if( (CurrentTimer-L4L5L6L7Timer) >= DelayBetweenScrolling && (!___L1) && (!__L1L2) && (!_L1L2L3) && (!L1L2L3L4) && (!L2L3L4L5) && (!L3L4L5L6)&& (L4L5L6L7) && (!L5L6L7L8)
&& (!L6L7L8L9) && (!L7L8L9L10) && (!L8L9L10L11) && (!L9L10L11L12)&& (!L10L11L12L13)&& (!L11L12L13L14) && (!L12L13L14_) && (!L13L14__) && (!L14___) ) 

{
L3onL4L5L6=false;
L3L4onL5L6=false;
L3L4L5onL6=false;
L3L4L5L6on=false;


L4L5L6L7=false;
L5L6L7L8=true;
 
L4onL5L6L7=true;
L4L5onL6L7=false;
L4L5L6onL7=false;
L4L5L6L7on=false;



 L4L5L6L7Timer=CurrentTimer;
 L5L6L7L8Timer=CurrentTimer;
}

FlashL4L5L6L7();



//===========================L5L6L7L8=========================//
if( (CurrentTimer-L5L6L7L8Timer) >= DelayBetweenScrolling && (!___L1) && (!__L1L2) && (!_L1L2L3) && (!L1L2L3L4) && (!L2L3L4L5) && (!L3L4L5L6)&& (!L4L5L6L7) && (L5L6L7L8)
&& (!L6L7L8L9) && (!L7L8L9L10) && (!L8L9L10L11) && (!L9L10L11L12)&& (!L10L11L12L13)&& (!L11L12L13L14) && (!L12L13L14_) && (!L13L14__) && (!L14___) ) 

{
L4onL5L6L7=false;
L4L5onL6L7=false;
L4L5L6onL7=false;
L4L5L6L7on=false;

L5L6L7L8=false;
L6L7L8L9=true;
 
L5onL6L7L8=true;
L5L6onL7L8=false;
L5L6L7onL8=false;
L5L6L7L8on=false;



 L5L6L7L8Timer=CurrentTimer;
 L6L7L8L9Timer=CurrentTimer;
}

FlashL5L6L7L8();



//===========================L6L7L8L9=========================//
if( (CurrentTimer-L6L7L8L9Timer) >= DelayBetweenScrolling && (!___L1) && (!__L1L2) && (!_L1L2L3) && (!L1L2L3L4) && (!L2L3L4L5) && (!L3L4L5L6)&& (!L4L5L6L7) && (!L5L6L7L8)
&& (L6L7L8L9) && (!L7L8L9L10) && (!L8L9L10L11) && (!L9L10L11L12)&& (!L10L11L12L13)&& (!L11L12L13L14) && (!L12L13L14_) && (!L13L14__) && (!L14___) ) 

{
L5onL6L7L8=false;
L5L6onL7L8=false;
L5L6L7onL8=false;
L5L6L7L8on=false;

L6L7L8L9=false;
L7L8L9L10=true;
 
L6onL7L8L9=true;
L6L7onL8L9=false;
L6L7L8onL9=false;
L6L7L8L9on=false;



 L6L7L8L9Timer=CurrentTimer;
 L7L8L9L10Timer=CurrentTimer;
}

FlashL6L7L8L9();



//===========================L7L8L9L10=========================//
if( (CurrentTimer-L7L8L9L10Timer) >= DelayBetweenScrolling && (!___L1) && (!__L1L2) && (!_L1L2L3) && (!L1L2L3L4) && (!L2L3L4L5) && (!L3L4L5L6)&& (!L4L5L6L7) && (!L5L6L7L8)
&& (!L6L7L8L9) && (L7L8L9L10) && (!L8L9L10L11) && (!L9L10L11L12)&& (!L10L11L12L13)&& (!L11L12L13L14) && (!L12L13L14_) && (!L13L14__) && (!L14___) ) 

{
L6onL7L8L9=false;
L6L7onL8L9=false;
L6L7L8onL9=false;
L6L7L8L9on=false;

L7L8L9L10=false;
L8L9L10L11=true;
 
L7onL8L9L10=true;
L7L8onL9L10=false;
L7L8L9onL10=false;
L7L8L9L10on=false;



 L7L8L9L10Timer=CurrentTimer;
 L8L9L10L11Timer=CurrentTimer;
}

FlashL7L8L9L10();






//===========================L8L9L10L11=========================//
if( (CurrentTimer-L8L9L10L11Timer) >= DelayBetweenScrolling && (!___L1) && (!__L1L2) && (!_L1L2L3) && (!L1L2L3L4) && (!L2L3L4L5) && (!L3L4L5L6)&& (!L4L5L6L7) && (!L5L6L7L8)
&& (!L6L7L8L9) && (!L7L8L9L10)&& (L8L9L10L11) && (!L9L10L11L12)&& (!L10L11L12L13)&& (!L11L12L13L14) && (!L12L13L14_) && (!L13L14__) && (!L14___) ) 

{
L7onL8L9L10=false;
L7L8onL9L10=false;
L7L8L9onL10=false;
L7L8L9L10on=false;


L8L9L10L11=false;
L9L10L11L12=true;
 
L8onL9L10L11=true;
L8L9onL10L11=false;
L8L9L10onL11=false;
L8L9L10L11on=false;



 L8L9L10L11Timer=CurrentTimer;
 L9L10L11L12Timer=CurrentTimer;
}

FlashL8L9L10L11();





//===========================L9L10L11L12=========================//
if( (CurrentTimer-L9L10L11L12Timer) >= DelayBetweenScrolling && (!___L1) && (!__L1L2) && (!_L1L2L3) && (!L1L2L3L4) && (!L2L3L4L5) && (!L3L4L5L6)&& (!L4L5L6L7) && (!L5L6L7L8)
&& (!L6L7L8L9) && (!L7L8L9L10)&& (!L8L9L10L11) && (L9L10L11L12)&& (!L10L11L12L13)&& (!L11L12L13L14) && (!L12L13L14_) && (!L13L14__) && (!L14___) ) 

{
L8onL9L10L11=false;
L8L9onL10L11=false;
L8L9L10onL11=false;
L8L9L10L11on=false;



L9L10L11L12=false;
L10L11L12L13=true;
 
L9onL10L11L12=true;
L9L10onL11L12=false;
L9L10L11onL12=false;
L9L10L11L12on=false;


 L9L10L11L12Timer=CurrentTimer;
 L10L11L12L13Timer=CurrentTimer;
}

FlashL9L10L11L12();





//===========================L10L11L12L13=========================//
if( (CurrentTimer-L10L11L12L13Timer) >= DelayBetweenScrolling && (!___L1) && (!__L1L2) && (!_L1L2L3) && (!L1L2L3L4) && (!L2L3L4L5) && (!L3L4L5L6)&& (!L4L5L6L7) && (!L5L6L7L8)
&& (!L6L7L8L9) && (!L7L8L9L10)&& (!L8L9L10L11) && (!L9L10L11L12)&& (L10L11L12L13)&& (!L11L12L13L14) && (!L12L13L14_) && (!L13L14__) && (!L14___) ) 

{
L9onL10L11L12=false;
L9L10onL11L12=false;
L9L10L11onL12=false;
L9L10L11L12on=false;



L10L11L12L13=false;
L11L12L13L14=true;
 
L10onL11L12L13=true;
L10L11onL12L13=false;
L10L11L12onL13=false;
L10L11L12L13on=false;


 L10L11L12L13Timer=CurrentTimer;
 L11L12L13L14Timer=CurrentTimer;
}

FlashL10L11L12L13();







//===========================L11L12L13L14=========================//
if( (CurrentTimer-L11L12L13L14Timer) >= DelayBetweenScrolling && (!___L1) && (!__L1L2) && (!_L1L2L3) && (!L1L2L3L4) && (!L2L3L4L5) && (!L3L4L5L6)&& (!L4L5L6L7) && (!L5L6L7L8)
&& (!L6L7L8L9) && (!L7L8L9L10)&& (!L8L9L10L11) && (!L9L10L11L12)&& (!L10L11L12L13)&& (L11L12L13L14) && (!L12L13L14_) && (!L13L14__) && (!L14___) ) 

{
L10onL11L12L13=false;
L10L11onL12L13=false;
L10L11L12onL13=false;
L10L11L12L13on=false;


L11L12L13L14=false;
L12L13L14_=true;
 
L11onL12L13L14=true;
L11L12onL13L14=false;
L11L12L13onL14=false;
L11L12L13L14on=false;


 L11L12L13L14Timer=CurrentTimer;
 L12L13L14_Timer=CurrentTimer;
}

FlashL11L12L13L14();







//===========================L12L13L14_=========================//
if( (CurrentTimer-L12L13L14_Timer) >= DelayBetweenScrolling && (!___L1) && (!__L1L2) && (!_L1L2L3) && (!L1L2L3L4) && (!L2L3L4L5) && (!L3L4L5L6)&& (!L4L5L6L7) && (!L5L6L7L8)
&& (!L6L7L8L9) && (!L7L8L9L10) && (!L8L9L10L11) && (!L9L10L11L12)&& (!L10L11L12L13)&& (!L11L12L13L14) && (L12L13L14_) && (!L13L14__) && (!L14___) )

{
L11onL12L13L14=false;
L11L12onL13L14=false;
L11L12L13onL14=false;
L11L12L13L14on=false;


L12L13L14_=false;
L13L14__=true;
 
  L12onL13L14_=true;
  L12L13onL14_=false;
  L12L13L14on_=false;
  
L12L13L14_Timer=CurrentTimer;
L13L14__Timer=CurrentTimer;

}
FlashL12L13L14_();






//===========================L13L14__=========================//
if( (CurrentTimer-L13L14__Timer) >= DelayBetweenScrolling && (!___L1) && (!__L1L2) && (!_L1L2L3) && (!L1L2L3L4) && (!L2L3L4L5) && (!L3L4L5L6) && (!L4L5L6L7) && (!L5L6L7L8)
&& (!L6L7L8L9) && (!L7L8L9L10) && (!L8L9L10L11) && (!L9L10L11L12)&& (!L10L11L12L13)&& (!L11L12L13L14) && (!L12L13L14_) && (L13L14__) && (!L14___) ) 

{
L12onL13L14_=false;
  L12L13onL14_=false;
  L12L13L14on_=false;
  


L13L14__=false;
L14___=true;

L13onL14__=true;
  L13L14on__=false;

L13L14__Timer=CurrentTimer;
L14___Timer=CurrentTimer;

}
FlashL13L14__();





//===========================L14___=========================//
if( (CurrentTimer-L14___Timer) >= DelayBetweenScrolling && (!___L1) && (!__L1L2) && (!_L1L2L3) && (!L1L2L3L4) && (!L2L3L4L5) && (!L3L4L5L6) && (!L4L5L6L7) && (!L5L6L7L8) 
&& (!L6L7L8L9) && (!L7L8L9L10) && (!L8L9L10L11) && (!L9L10L11L12)&& (!L10L11L12L13)&& (!L11L12L13L14) && (!L12L13L14_) && (!L13L14__) && (L14___) ) 

{
  
L13onL14__=false;
  L13L14on__=false;

L14___=false;

ValueDigit1Lose=FourteenthLetter;
FlashDigit1();

delay(DelayBetweenScrolling);
DigitsOff();
delay(DelayBetweenScrolling);

___L1=true;

i++;

}

//Reset to a new game after 5 rounds of scrolling
if ( i==5 )
{
ValueDigit1=2;
ValueDigit2=0;
ValueDigit3=2;
ValueDigit4=0;
i=0;
}

}
}
