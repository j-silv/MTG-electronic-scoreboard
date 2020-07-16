/*Using switches and the delays defined in main.ino, we are able to
  alternatively flash on and off multiple values of the LED digit display in a scrolling fashion.
  The structure for doing this is essentially repeated in each function. Basically
  we are waiting until it's time to scroll the predefined letters, and once it's time
  then we flash the correpsonding letters and set the next stage switches. It's important 
  to keep track of the timing (so that the scrolling appears coherent), 
  so that's why there is a timer call before exiting the function.
*/
void Flash__L1L2()
{
  if( (CurrentTimer-__L1L2Timer) >= DelayBetweenNumbers && (__L1onL2) && (!__L1L2on) )
{
  ValueDigit3Lose=FirstLetter;
  FlashDigit3();

  __L1L2Timer=CurrentTimer;

  __L1onL2=false;
  __L1L2on=true;
}

if( (CurrentTimer-__L1L2Timer) >= DelayBetweenNumbers && (!__L1onL2) && (__L1L2on) )
{
  ValueDigit4Lose=SecondLetter;
  FlashDigit4();

  __L1L2Timer=CurrentTimer;

  __L1onL2=true;
  __L1L2on=false;
}

}











void Flash_L1L2L3()
{
  if( (CurrentTimer-_L1L2L3Timer) >= DelayBetweenNumbers && (_L1onL2L3) && (!_L1L2onL3) && (!_L1L2L3on) )
{
  ValueDigit2Lose=FirstLetter;
  FlashDigit2();

  _L1L2L3Timer=CurrentTimer;

  _L1onL2L3=false;
  _L1L2onL3=true;
  _L1L2L3on=false;
}

if( (CurrentTimer-_L1L2L3Timer) >= DelayBetweenNumbers && (!_L1onL2L3) && (_L1L2onL3) && (!_L1L2L3on) )
{
  ValueDigit3Lose=SecondLetter;
  FlashDigit3();

  _L1L2L3Timer=CurrentTimer;

  _L1onL2L3=false;
  _L1L2onL3=false;
  _L1L2L3on=true;
}

if( (CurrentTimer-_L1L2L3Timer) >= DelayBetweenNumbers && (!_L1onL2L3) && (!_L1L2onL3) && (_L1L2L3on) )
{
  ValueDigit4Lose=ThirdLetter;
  FlashDigit4();

  _L1L2L3Timer=CurrentTimer;

  _L1onL2L3=true;
  _L1L2onL3=false;
  _L1L2L3on=false;
}

}











void FlashL1L2L3L4()
{
  if( (CurrentTimer-L1L2L3L4Timer) >= DelayBetweenNumbers && (L1onL2L3L4) && (!L1L2onL3L4) && (!L1L2L3onL4) && (!L1L2L3L4on) )
{
  ValueDigit1Lose=FirstLetter;
  FlashDigit1();

  L1L2L3L4Timer=CurrentTimer;

  L1onL2L3L4=false;
  L1L2onL3L4=true;
  L1L2L3onL4=false;
  L1L2L3L4on=false;
}

if( (CurrentTimer-L1L2L3L4Timer) >= DelayBetweenNumbers && (!L1onL2L3L4) && (L1L2onL3L4) && (!L1L2L3onL4) && (!L1L2L3L4on) )
{
  ValueDigit2Lose=SecondLetter;
  FlashDigit2();

  L1L2L3L4Timer=CurrentTimer;

  L1onL2L3L4=false;
  L1L2onL3L4=false;
  L1L2L3onL4=true;
  L1L2L3L4on=false;
}

if( (CurrentTimer-L1L2L3L4Timer) >= DelayBetweenNumbers && (!L1onL2L3L4) && (!L1L2onL3L4) && (L1L2L3onL4) && (!L1L2L3L4on) )
{
  ValueDigit3Lose=ThirdLetter;
  FlashDigit3();

  L1L2L3L4Timer=CurrentTimer;

  L1onL2L3L4=false;
  L1L2onL3L4=false;
  L1L2L3onL4=false;
  L1L2L3L4on=true;
}

if( (CurrentTimer-L1L2L3L4Timer) >= DelayBetweenNumbers && (!L1onL2L3L4) && (!L1L2onL3L4) && (!L1L2L3onL4) && (L1L2L3L4on) )
{
  ValueDigit4Lose=FourthLetter;
  FlashDigit4();

  L1L2L3L4Timer=CurrentTimer;

  L1onL2L3L4=true;
  L1L2onL3L4=false;
  L1L2L3onL4=false;
  L1L2L3L4on=false;
}

}











void FlashL2L3L4L5()
{
  if( (CurrentTimer-L2L3L4L5Timer) >= DelayBetweenNumbers && (L2onL3L4L5) && (!L2L3onL4L5) && (!L2L3L4onL5) && (!L2L3L4L5on) )
{
  ValueDigit1Lose=SecondLetter;
  FlashDigit1();

  L2L3L4L5Timer=CurrentTimer;

L2onL3L4L5=false;
L2L3onL4L5=true;
L2L3L4onL5=false;
L2L3L4L5on=false;
}


if( (CurrentTimer-L2L3L4L5Timer) >= DelayBetweenNumbers && (!L2onL3L4L5) && (L2L3onL4L5) && (!L2L3L4onL5) && (!L2L3L4L5on) )
{
  ValueDigit2Lose=ThirdLetter;
  FlashDigit2();

  L2L3L4L5Timer=CurrentTimer;

L2onL3L4L5=false;
L2L3onL4L5=false;
L2L3L4onL5=true;
L2L3L4L5on=false;
}

if( (CurrentTimer-L2L3L4L5Timer) >= DelayBetweenNumbers && (!L2onL3L4L5) && (!L2L3onL4L5) && (L2L3L4onL5) && (!L2L3L4L5on) )
{
  ValueDigit3Lose=FourthLetter;
  FlashDigit3();

  L2L3L4L5Timer=CurrentTimer;

L2onL3L4L5=false;
L2L3onL4L5=false;
L2L3L4onL5=false;
L2L3L4L5on=true;
}


if( (CurrentTimer-L2L3L4L5Timer) >= DelayBetweenNumbers && (!L2onL3L4L5) && (!L2L3onL4L5) && (!L2L3L4onL5) && (L2L3L4L5on) )
{
  ValueDigit4Lose=FifthLetter;
  FlashDigit4();

  L2L3L4L5Timer=CurrentTimer;

L2onL3L4L5=true;
L2L3onL4L5=false;
L2L3L4onL5=false;
L2L3L4L5on=false;
}

}









void FlashL3L4L5L6()
{
  if( (CurrentTimer-L3L4L5L6Timer) >= DelayBetweenNumbers && (L3onL4L5L6) && (!L3L4onL5L6) && (!L3L4L5onL6) && (!L3L4L5L6on) )
{
  ValueDigit1Lose=ThirdLetter;
  FlashDigit1();

  L3L4L5L6Timer=CurrentTimer;

L3onL4L5L6=false;
L3L4onL5L6=true;
L3L4L5onL6=false;
L3L4L5L6on=false;
}


if( (CurrentTimer-L3L4L5L6Timer) >= DelayBetweenNumbers && (!L3onL4L5L6) && (L3L4onL5L6) && (!L3L4L5onL6) && (!L3L4L5L6on) )
{
  ValueDigit2Lose=FourthLetter;
  FlashDigit2();

  L3L4L5L6Timer=CurrentTimer;

L3onL4L5L6=false;
L3L4onL5L6=false;
L3L4L5onL6=true;
L3L4L5L6on=false;
}


if( (CurrentTimer-L3L4L5L6Timer) >= DelayBetweenNumbers && (!L3onL4L5L6) && (!L3L4onL5L6) && (L3L4L5onL6) && (!L3L4L5L6on) )
{
  ValueDigit3Lose=FifthLetter;
  FlashDigit3();

  L3L4L5L6Timer=CurrentTimer;

L3onL4L5L6=false;
L3L4onL5L6=false;
L3L4L5onL6=false;
L3L4L5L6on=true;
}


if( (CurrentTimer-L3L4L5L6Timer) >= DelayBetweenNumbers && (!L3onL4L5L6) && (!L3L4onL5L6) && (!L3L4L5onL6) && (L3L4L5L6on) )
{
  ValueDigit4Lose=SixthLetter;
  FlashDigit4();

  L3L4L5L6Timer=CurrentTimer;

L3onL4L5L6=true;
L3L4onL5L6=false;
L3L4L5onL6=false;
L3L4L5L6on=false;
}


}












void FlashL4L5L6L7()
{
  if( (CurrentTimer-L4L5L6L7Timer) >= DelayBetweenNumbers && (L4onL5L6L7) && (!L4L5onL6L7) && (!L4L5L6onL7) && (!L4L5L6L7on) )
{
  ValueDigit1Lose=FourthLetter;
  FlashDigit1();

  L4L5L6L7Timer=CurrentTimer;

L4onL5L6L7=false;
L4L5onL6L7=true;
L4L5L6onL7=false;
L4L5L6L7on=false;
}


if( (CurrentTimer-L4L5L6L7Timer) >= DelayBetweenNumbers && (!L4onL5L6L7) && (L4L5onL6L7) && (!L4L5L6onL7) && (!L4L5L6L7on) )
{
  ValueDigit2Lose=FifthLetter;
  FlashDigit2();

  L4L5L6L7Timer=CurrentTimer;

L4onL5L6L7=false;
L4L5onL6L7=false;
L4L5L6onL7=true;
L4L5L6L7on=false;
}


if( (CurrentTimer-L4L5L6L7Timer) >= DelayBetweenNumbers && (!L4onL5L6L7) && (!L4L5onL6L7) && (L4L5L6onL7) && (!L4L5L6L7on) )
{
  ValueDigit3Lose=SixthLetter;
  FlashDigit3();

  L4L5L6L7Timer=CurrentTimer;

L4onL5L6L7=false;
L4L5onL6L7=false;
L4L5L6onL7=false;
L4L5L6L7on=true;
}


if( (CurrentTimer-L4L5L6L7Timer) >= DelayBetweenNumbers && (!L4onL5L6L7) && (!L4L5onL6L7) && (!L4L5L6onL7) && (L4L5L6L7on) )
{
  ValueDigit4Lose=SeventhLetter;
  FlashDigit4();

  L4L5L6L7Timer=CurrentTimer;

L4onL5L6L7=true;
L4L5onL6L7=false;
L4L5L6onL7=false;
L4L5L6L7on=false;
}

}













void FlashL5L6L7L8()
{
  if( (CurrentTimer-L5L6L7L8Timer) >= DelayBetweenNumbers && (L5onL6L7L8) && (!L5L6onL7L8) && (!L5L6L7onL8) && (!L5L6L7L8on) )
{
  ValueDigit1Lose=FifthLetter;
  FlashDigit1();

  L5L6L7L8Timer=CurrentTimer;

L5onL6L7L8=false;
L5L6onL7L8=true;
L5L6L7onL8=false;
L5L6L7L8on=false;
}


if( (CurrentTimer-L5L6L7L8Timer) >= DelayBetweenNumbers && (!L5onL6L7L8) && (L5L6onL7L8) && (!L5L6L7onL8) && (!L5L6L7L8on) )
{
  ValueDigit2Lose=SixthLetter;
  FlashDigit2();

  L5L6L7L8Timer=CurrentTimer;

L5onL6L7L8=false;
L5L6onL7L8=false;
L5L6L7onL8=true;
L5L6L7L8on=false;
}


if( (CurrentTimer-L5L6L7L8Timer) >= DelayBetweenNumbers && (!L5onL6L7L8) && (!L5L6onL7L8) && (L5L6L7onL8) && (!L5L6L7L8on) )
{
  ValueDigit3Lose=SeventhLetter;
  FlashDigit3();

  L5L6L7L8Timer=CurrentTimer;

L5onL6L7L8=false;
L5L6onL7L8=false;
L5L6L7onL8=false;
L5L6L7L8on=true;
}


if( (CurrentTimer-L5L6L7L8Timer) >= DelayBetweenNumbers && (!L5onL6L7L8) && (!L5L6onL7L8) && (!L5L6L7onL8) && (L5L6L7L8on) )
{
  ValueDigit4Lose=EighthLetter;
  FlashDigit4();

  L5L6L7L8Timer=CurrentTimer;

L5onL6L7L8=true;
L5L6onL7L8=false;
L5L6L7onL8=false;
L5L6L7L8on=false;
}

}










void FlashL6L7L8L9()
{
  if( (CurrentTimer-L6L7L8L9Timer) >= DelayBetweenNumbers && (L6onL7L8L9) && (!L6L7onL8L9) && (!L6L7L8onL9) && (!L6L7L8L9on) )
{
  ValueDigit1Lose=SixthLetter;
  FlashDigit1();

  L6L7L8L9Timer=CurrentTimer;

L6onL7L8L9=false;
L6L7onL8L9=true;
L6L7L8onL9=false;
L6L7L8L9on=false;
}


if( (CurrentTimer-L6L7L8L9Timer) >= DelayBetweenNumbers && (!L6onL7L8L9) && (L6L7onL8L9) && (!L6L7L8onL9) && (!L6L7L8L9on) )
{
  ValueDigit2Lose=SeventhLetter;
  FlashDigit2();

  L6L7L8L9Timer=CurrentTimer;

L6onL7L8L9=false;
L6L7onL8L9=false;
L6L7L8onL9=true;
L6L7L8L9on=false;
}


if( (CurrentTimer-L6L7L8L9Timer) >= DelayBetweenNumbers && (!L6onL7L8L9) && (!L6L7onL8L9) && (L6L7L8onL9) && (!L6L7L8L9on) )
{
  ValueDigit3Lose=EighthLetter;
  FlashDigit3();

  L6L7L8L9Timer=CurrentTimer;

L6onL7L8L9=false;
L6L7onL8L9=false;
L6L7L8onL9=false;
L6L7L8L9on=true;
}


if( (CurrentTimer-L6L7L8L9Timer) >= DelayBetweenNumbers && (!L6onL7L8L9) && (!L6L7onL8L9) && (!L6L7L8onL9) && (L6L7L8L9on) )
{
  ValueDigit4Lose=NinthLetter;
  FlashDigit4();

  L6L7L8L9Timer=CurrentTimer;

L6onL7L8L9=true;
L6L7onL8L9=false;
L6L7L8onL9=false;
L6L7L8L9on=false;
}

}










void FlashL7L8L9L10()
{
  if( (CurrentTimer-L7L8L9L10Timer) >= DelayBetweenNumbers && (L7onL8L9L10) && (!L7L8onL9L10) && (!L7L8L9onL10) && (!L7L8L9L10on) )
{
  ValueDigit1Lose=SeventhLetter;
  FlashDigit1();

  L7L8L9L10Timer=CurrentTimer;

L7onL8L9L10=false;
L7L8onL9L10=true;
L7L8L9onL10=false;
L7L8L9L10on=false;
}


if( (CurrentTimer-L7L8L9L10Timer) >= DelayBetweenNumbers && (!L7onL8L9L10) && (L7L8onL9L10) && (!L7L8L9onL10) && (!L7L8L9L10on) )
{
  ValueDigit2Lose=EighthLetter;
  FlashDigit2();

  L7L8L9L10Timer=CurrentTimer;

L7onL8L9L10=false;
L7L8onL9L10=false;
L7L8L9onL10=true;
L7L8L9L10on=false;
}


if( (CurrentTimer-L7L8L9L10Timer) >= DelayBetweenNumbers && (!L7onL8L9L10) && (!L7L8onL9L10) && (L7L8L9onL10) && (!L7L8L9L10on) )
{
  ValueDigit3Lose=NinthLetter;
  FlashDigit3();

  L7L8L9L10Timer=CurrentTimer;

L7onL8L9L10=false;
L7L8onL9L10=false;
L7L8L9onL10=false;
L7L8L9L10on=true;
}


if( (CurrentTimer-L7L8L9L10Timer) >= DelayBetweenNumbers && (!L7onL8L9L10) && (!L7L8onL9L10) && (!L7L8L9onL10) && (L7L8L9L10on) )
{
  ValueDigit4Lose=TenthLetter;
  FlashDigit4();

  L7L8L9L10Timer=CurrentTimer;

L7onL8L9L10=true;
L7L8onL9L10=false;
L7L8L9onL10=false;
L7L8L9L10on=false;
}
}





void FlashL8L9L10L11()
{
  if( (CurrentTimer-L8L9L10L11Timer) >= DelayBetweenNumbers && (L8onL9L10L11) && (!L8L9onL10L11) && (!L8L9L10onL11) && (!L8L9L10L11on) )
{
  ValueDigit1Lose=EighthLetter;
  FlashDigit1();

  L8L9L10L11Timer=CurrentTimer;

L8onL9L10L11=false;
L8L9onL10L11=true;
L8L9L10onL11=false;
L8L9L10L11on=false;
}


if( (CurrentTimer-L8L9L10L11Timer) >= DelayBetweenNumbers && (!L8onL9L10L11) && (L8L9onL10L11) && (!L8L9L10onL11) && (!L8L9L10L11on) )
{
  ValueDigit2Lose=NinthLetter;
  FlashDigit2();

  L8L9L10L11Timer=CurrentTimer;

L8onL9L10L11=false;
L8L9onL10L11=false;
L8L9L10onL11=true;
L8L9L10L11on=false;
}


if( (CurrentTimer-L8L9L10L11Timer) >= DelayBetweenNumbers && (!L8onL9L10L11) && (!L8L9onL10L11) && (L8L9L10onL11) && (!L8L9L10L11on) )
{
  ValueDigit3Lose=TenthLetter;
  FlashDigit3();

  L8L9L10L11Timer=CurrentTimer;

L8onL9L10L11=false;
L8L9onL10L11=false;
L8L9L10onL11=false;
L8L9L10L11on=true;
}


if( (CurrentTimer-L8L9L10L11Timer) >= DelayBetweenNumbers && (!L8onL9L10L11) && (!L8L9onL10L11) && (!L8L9L10onL11) && (L8L9L10L11on) )
{
  ValueDigit4Lose=EleventhLetter;
  FlashDigit4();

  L8L9L10L11Timer=CurrentTimer;

L8onL9L10L11=true;
L8L9onL10L11=false;
L8L9L10onL11=false;
L8L9L10L11on=false;
}

}




void FlashL9L10L11L12()
{
  if( (CurrentTimer-L9L10L11L12Timer) >= DelayBetweenNumbers && (L9onL10L11L12) && (!L9L10onL11L12) && (!L9L10L11onL12) && (!L9L10L11L12on) )
{
  ValueDigit1Lose=NinthLetter;
  FlashDigit1();

  L9L10L11L12Timer=CurrentTimer;

L9onL10L11L12=false;
L9L10onL11L12=true;
L9L10L11onL12=false;
L9L10L11L12on=false;
}


if( (CurrentTimer-L9L10L11L12Timer) >= DelayBetweenNumbers && (!L9onL10L11L12) && (L9L10onL11L12) && (!L9L10L11onL12) && (!L9L10L11L12on) )
{
  ValueDigit2Lose=TenthLetter;
  FlashDigit2();

  L9L10L11L12Timer=CurrentTimer;

L9onL10L11L12=false;
L9L10onL11L12=false;
L9L10L11onL12=true;
L9L10L11L12on=false;
}


if( (CurrentTimer-L9L10L11L12Timer) >= DelayBetweenNumbers && (!L9onL10L11L12) && (!L9L10onL11L12) && (L9L10L11onL12) && (!L9L10L11L12on) )
{
  ValueDigit3Lose=EleventhLetter;
  FlashDigit3();

  L9L10L11L12Timer=CurrentTimer;

L9onL10L11L12=false;
L9L10onL11L12=false;
L9L10L11onL12=false;
L9L10L11L12on=true;
}


if( (CurrentTimer-L9L10L11L12Timer) >= DelayBetweenNumbers && (!L9onL10L11L12) && (!L9L10onL11L12) && (!L9L10L11onL12) && (L9L10L11L12on) )
{
  ValueDigit4Lose=TwelfthLetter;
  FlashDigit4();

  L9L10L11L12Timer=CurrentTimer;

L9onL10L11L12=true;
L9L10onL11L12=false;
L9L10L11onL12=false;
L9L10L11L12on=false;
}

}






void FlashL10L11L12L13()
{
  if( (CurrentTimer-L10L11L12L13Timer) >= DelayBetweenNumbers && (L10onL11L12L13) && (!L10L11onL12L13) && (!L10L11L12onL13) && (!L10L11L12L13on) )
{
  ValueDigit1Lose=TenthLetter;
  FlashDigit1();

  L10L11L12L13Timer=CurrentTimer;

L10onL11L12L13=false;
L10L11onL12L13=true;
L10L11L12onL13=false;
L10L11L12L13on=false;
}


if( (CurrentTimer-L10L11L12L13Timer) >= DelayBetweenNumbers && (!L10onL11L12L13) && (L10L11onL12L13) && (!L10L11L12onL13) && (!L10L11L12L13on) )
{
  ValueDigit2Lose=EleventhLetter;
  FlashDigit2();

  L10L11L12L13Timer=CurrentTimer;

L10onL11L12L13=false;
L10L11onL12L13=false;
L10L11L12onL13=true;
L10L11L12L13on=false;
}


if( (CurrentTimer-L10L11L12L13Timer) >= DelayBetweenNumbers && (!L10onL11L12L13) && (!L10L11onL12L13) && (L10L11L12onL13) && (!L10L11L12L13on) )
{
  ValueDigit3Lose=TwelfthLetter;
  FlashDigit3();

  L10L11L12L13Timer=CurrentTimer;

L10onL11L12L13=false;
L10L11onL12L13=false;
L10L11L12onL13=false;
L10L11L12L13on=true;
}


if( (CurrentTimer-L10L11L12L13Timer) >= DelayBetweenNumbers && (!L10onL11L12L13) && (!L10L11onL12L13) && (!L10L11L12onL13) && (L10L11L12L13on) )
{
  ValueDigit4Lose=ThirteenthLetter;
  FlashDigit4();

  L10L11L12L13Timer=CurrentTimer;

L10onL11L12L13=true;
L10L11onL12L13=false;
L10L11L12onL13=false;
L10L11L12L13on=false;
}

}











void FlashL11L12L13L14()
{
  if( (CurrentTimer-L11L12L13L14Timer) >= DelayBetweenNumbers && (L11onL12L13L14) && (!L11L12onL13L14) && (!L11L12L13onL14) && (!L11L12L13L14on) )
{
  ValueDigit1Lose=EleventhLetter;
  FlashDigit1();

  L11L12L13L14Timer=CurrentTimer;

L11onL12L13L14=false;
L11L12onL13L14=true;
L11L12L13onL14=false;
L11L12L13L14on=false;
}


if( (CurrentTimer-L11L12L13L14Timer) >= DelayBetweenNumbers && (!L11onL12L13L14) && (L11L12onL13L14) && (!L11L12L13onL14) && (!L11L12L13L14on) )
{
  ValueDigit2Lose=TwelfthLetter;
  FlashDigit2();

  L11L12L13L14Timer=CurrentTimer;

L11onL12L13L14=false;
L11L12onL13L14=false;
L11L12L13onL14=true;
L11L12L13L14on=false;
}


if( (CurrentTimer-L11L12L13L14Timer) >= DelayBetweenNumbers && (!L11onL12L13L14) && (!L11L12onL13L14) && (L11L12L13onL14) && (!L11L12L13L14on) )
{
  ValueDigit3Lose=ThirteenthLetter;
  FlashDigit3();

  L11L12L13L14Timer=CurrentTimer;

L11onL12L13L14=false;
L11L12onL13L14=false;
L11L12L13onL14=false;
L11L12L13L14on=true;
}


if( (CurrentTimer-L11L12L13L14Timer) >= DelayBetweenNumbers && (!L11onL12L13L14) && (!L11L12onL13L14) && (!L11L12L13onL14) && (L11L12L13L14on) )
{
  ValueDigit4Lose=FourteenthLetter;
  FlashDigit4();

  L11L12L13L14Timer=CurrentTimer;

L11onL12L13L14=true;
L11L12onL13L14=false;
L11L12L13onL14=false;
L11L12L13L14on=false;
}

}










void FlashL12L13L14_()
{
  if( (CurrentTimer-L12L13L14_Timer) >= DelayBetweenNumbers && (L12onL13L14_) && (!L12L13onL14_) && (!L12L13L14on_) )
{
  ValueDigit1Lose=TwelfthLetter;
  FlashDigit1();

  L12L13L14_Timer=CurrentTimer;

  L12onL13L14_=false;
  L12L13onL14_=true;
  L12L13L14on_=false;
}

if( (CurrentTimer-L12L13L14_Timer) >= DelayBetweenNumbers && (!L12onL13L14_) && (L12L13onL14_) && (!L12L13L14on_) )
{
  ValueDigit2Lose=ThirteenthLetter;
  FlashDigit2();

  L12L13L14_Timer=CurrentTimer;

  L12onL13L14_=false;
  L12L13onL14_=false;
  L12L13L14on_=true;
}

if( (CurrentTimer-L12L13L14_Timer) >= DelayBetweenNumbers && (!L12onL13L14_) && (!L12L13onL14_) && (L12L13L14on_) )
{
  ValueDigit3Lose=FourteenthLetter;
  FlashDigit3();

  L12L13L14_Timer=CurrentTimer;

  L12onL13L14_=true;
  L12L13onL14_=false;
  L12L13L14on_=false;
}

}




void FlashL13L14__()
{
if( (CurrentTimer-L13L14__Timer) >= DelayBetweenNumbers && (L13onL14__) && (!L13L14on__) )
{
  ValueDigit1Lose=ThirteenthLetter;
  FlashDigit1();

  L13L14__Timer=CurrentTimer;

  L13onL14__=false;
  L13L14on__=true;
}


if( (CurrentTimer-L13L14__Timer) >= DelayBetweenNumbers && (!L13onL14__) && (L13L14on__) )
{
  ValueDigit2Lose=FourteenthLetter;
  FlashDigit2();

  L13L14__Timer=CurrentTimer;

  L13onL14__=true;
  L13L14on__=false;
}

}
