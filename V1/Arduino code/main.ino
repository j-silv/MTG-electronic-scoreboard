//=======Counter variable========//
byte i = 0;

//=======Shift register pins========//
const byte data=8;
const byte latch=7;
const byte clock=6;

//=======Input button pins=========//
const byte UpLeft=9;
const byte DownLeft=10;
const byte UpRight=11;
const byte DownRight=12;

//======LED display pins=======//
const byte Digit1 = 2;
const byte Digit2 = 3;
const byte Digit3 = 4;
const byte Digit4 = 5;

//=======Variables for the value of each digit=======//
unsigned int ValueDigit1 = 2;   //Each player starts the game with 20 life points
unsigned int ValueDigit2 = 0;  
unsigned int ValueDigit3 = 2;
unsigned int ValueDigit4 = 0;

//=======Variables for the value of each digit during the endgame scrolling message=======//
unsigned int ValueDigit1Lose;
unsigned int ValueDigit2Lose;
unsigned int ValueDigit3Lose;
unsigned int ValueDigit4Lose;

//=========Variables that correspond to the 14 character scrolling endgame message (see LED segment data array below)=========//
unsigned char FirstLetter=25;         //P
unsigned char SecondLetter=21;        //L
unsigned char ThirdLetter=10;         //A
unsigned char FourthLetter=59;        //Y
unsigned char FifthLetter=14;         //E
unsigned char SixthLetter=53;         //R
unsigned char SeventhLetter=35;       //SPACE
unsigned char EighthLetter;           //1 OR 2 (depends on who gets to 0 life points first) 
unsigned char NinthLetter=35;         //SPACE
unsigned char TenthLetter=21;         //L
unsigned char EleventhLetter=24;      //O
unsigned char TwelfthLetter=28;       //S
unsigned char ThirteenthLetter=14;    //E
unsigned char FourteenthLetter=28;    //S

//======LED segment data for displaying a certain number/letter======//
unsigned char table[]={
  B00111111,  //0
  B00000110,  //1
  B01011011,  //2
  B01001111,  //3
  B01100110,  //4
  B01101101,  //5
  B01111101,  //6
  B00000111,  //7
  B01111111,  //8
  B01101111,  //9
  B01110111,  //10(A)
  B01111111,  //11(B)
  B00111001,  //12(C)
  B00000000,  //13(D) can't display this letter
  B01111001,  //14(E)
  B01110001,  //15(F)
  B00000000,  //16(G) can't display this letter
  B01110110,  //17(H)
  B00110000,  //18I)
  B00011110,  //19(J)
  B00000000,  //20(K) can't display this letter
  B00111000,  //21(L)
  B00010101,  //22(M)
  B00000000,  //23(N) can't display this letter
  B00111111,  //24(O)
  B01110011,  //25(P)
  B00000000,  //26(Q) can't display this letter
  B00000000,  //27(R) can't display this letter
  B01101101,  //28(S)
  B00000000,  //29(T) can't display this letter
  B00111110,  //30(U)
  B00000000,  //31(V) can't display this letter
  B00101010,  //32(W)
  B00000000,  //33(Y) can't display this letter
  B01011011,  //34(Z)
  B00000000,  //35(space)
  B00000000,  //36(a) can't display this letter
  B01111100,  //37(b)
  B01011000,  //38(c)
  B01011110,  //39(d)
  B00000000,  //40(e) can't display this letter
  B00000000,  //41(f) can't display this letter
  B01101111,  //42(g)
  B01110000,  //43(h)
  B00000000,  //44(i) can't display this letter
  B00000000,  //45(j) can't display this letter
  B00000000,  //46(k) can't display this letter
  B00110000,  //47(l)
  B00000000,  //48(m) can't display this letter
  B01010100,  //49(n)
  B01011100,  //50(o)
  B00000000,  //51(p) can't display this letter
  B01100111,  //52(q)
  B01010000,  //53(r)
  B00000000,  //54(s) can't display this letter
  B01111000,  //55(t)
  B00011100,  //56(u)
  B00011100,  //57(v)
  B00000000,  //58(w) can't display this letter
  B01101110,  //59(y)
  B00000000}; //60(z) can't display this letter

//=============First set of switches for scrolling endgame message=================//
bool ___L1=false;
bool __L1L2=false;
bool _L1L2L3=false;
bool L1L2L3L4=false;
bool L2L3L4L5=false;
bool L3L4L5L6=false;
bool L4L5L6L7=false;
bool L5L6L7L8=false;
bool L6L7L8L9=false;
bool L7L8L9L10=false;
bool L8L9L10L11=false;
bool L9L10L11L12=false;
bool L10L11L12L13=false;
bool L11L12L13L14=false;
bool L12L13L14_=false;
bool L13L14__=false;
bool L14___=false;

//==============Second set of switches for scrolling endgame message=================//
bool __L1onL2 = false;
bool __L1L2on = false;
bool _L1onL2L3=false;
bool _L1L2onL3=false;
bool _L1L2L3on=false;
bool L1onL2L3L4=false;
bool L1L2onL3L4=false;
bool L1L2L3onL4=false;
bool L1L2L3L4on=false;
bool L2onL3L4L5=false;
bool L2L3onL4L5=false;
bool L2L3L4onL5=false;
bool L2L3L4L5on=false;
bool L3onL4L5L6=false;
bool L3L4onL5L6=false;
bool L3L4L5onL6=false;
bool L3L4L5L6on=false;
bool L4onL5L6L7=false;
bool L4L5onL6L7=false;
bool L4L5L6onL7=false;
bool L4L5L6L7on=false;
bool L5onL6L7L8=false;
bool L5L6onL7L8=false;
bool L5L6L7onL8=false;
bool L5L6L7L8on=false;
bool L6onL7L8L9=false;
bool L6L7onL8L9=false;
bool L6L7L8onL9=false;
bool L6L7L8L9on=false;
bool L7onL8L9L10=false;
bool L7L8onL9L10=false;
bool L7L8L9onL10=false;
bool L7L8L9L10on=false;
bool L8onL9L10L11=false;
bool L8L9onL10L11=false;
bool L8L9L10onL11=false;
bool L8L9L10L11on=false;
bool L9onL10L11L12=false;
bool L9L10onL11L12=false;
bool L9L10L11onL12=false;
bool L9L10L11L12on=false;
bool L10onL11L12L13=false;
bool L10L11onL12L13=false;
bool L10L11L12onL13=false;
bool L10L11L12L13on=false;
bool L11onL12L13L14=false;
bool L11L12onL13L14=false;
bool L11L12L13onL14=false;
bool L11L12L13L14on=false;
bool L12onL13L14_=false;
bool L12L13onL14_=false;
bool L12L13L14on_=false;
bool L13onL14__=false;
bool L13L14on__=false;


//======Time variables (delays, variables to hold millis() value, etc.)=====//
unsigned long CurrentTimer;

unsigned long UpLeftTimer;
unsigned long UpLeftHeldTimer;
unsigned long IsUpLeftHeld;
const unsigned long UpLeftDelay=100;      //It takes 100 ms to increase the Player 1's health
const unsigned long UpLeftIsHeld=1000;    //It takes 1 s before entering rapid point increase cycling mode for Player 1
const unsigned long UpLeftFastDelay=60;   //Small 60 ms delay

unsigned long DownLeftTimer;
unsigned long DownLeftHeldTimer;
unsigned long IsDownLeftHeld;
const unsigned long DownLeftDelay=100;    //Same as previous, except now it is to decrease Player 1's health
const unsigned long DownLeftIsHeld=1000;
const unsigned long DownLeftFastDelay=60;

unsigned long UpRightTimer;
unsigned long UpRightHeldTimer;
unsigned long IsUpRightHeld;
const unsigned long UpRightDelay=100;     //Same as previous, except now it is to increase Player 2's health
const unsigned long UpRightIsHeld=1000;
const unsigned long UpRightFastDelay=60;

unsigned long DownRightTimer;
unsigned long DownRightHeldTimer;
unsigned long IsDownRightHeld;
const unsigned long DownRightDelay=100;   //Same as previous, except now it is to decrease Player 2's health
const unsigned long DownRightIsHeld=1000;
const unsigned long DownRightFastDelay=60;


byte vision = 1;   //Display value of the LED digit for 1 ms

//======Input button states=====//
bool UpLeftPressed=false;
bool UpLeftFastGo=false;
bool UpLeftNotHeld=false;
bool UpLeftHeld=false;

bool DownLeftPressed=false;
bool DownLeftFastGo=false;
bool DownLeftNotHeld=false;
bool DownLeftHeld=false;

bool UpRightPressed=false;
bool UpRightFastGo=false;
bool UpRightNotHeld=false;
bool UpRightHeld=false;

bool DownRightPressed=false;
bool DownRightFastGo=false;
bool DownRightNotHeld=false;
bool DownRightHeld=false;

//=================Variables for scrolling endgame message (2)===============//
unsigned long DelayBetweenNumbers=2;     //each digit will be displayed for 2 ms while scrolling
unsigned long DelayBetweenScrolling=300; //controls how fast the scrolling will occur

unsigned long __L1L2Timer;
unsigned long _L1L2L3Timer;
unsigned long L1L2L3L4Timer;
unsigned long L2L3L4L5Timer;
unsigned long L3L4L5L6Timer;
unsigned long L4L5L6L7Timer;
unsigned long L5L6L7L8Timer;
unsigned long L6L7L8L9Timer;
unsigned long L7L8L9L10Timer;
unsigned long L8L9L10_Timer;
unsigned long L9L10__Timer;
unsigned long L10___Timer;

unsigned long L8L9L10L11Timer;
unsigned long L9L10L11L12Timer;
unsigned long L10L11L12L13Timer;
unsigned long L11L12L13L14Timer;
unsigned long L12L13L14_Timer;
unsigned long L13L14__Timer;
unsigned long L14___Timer;

//=================Set up all pins===============//
void setup()
{
  pinMode(latch,OUTPUT);
  pinMode(clock,OUTPUT);
  pinMode(data,OUTPUT);
  
  pinMode(Digit1,OUTPUT);
  pinMode(Digit2,OUTPUT);
  pinMode(Digit3,OUTPUT);
  pinMode(Digit4,OUTPUT);
  
  pinMode(UpLeft,INPUT_PULLUP);
  pinMode(DownLeft,INPUT_PULLUP);
  pinMode(UpRight,INPUT_PULLUP);
  pinMode(DownRight,INPUT_PULLUP); 

  DigitsOff();
}

//=================Main program===============//
void loop() {
CurrentTimer = millis();  

ReadUpLeft();
ReadUpLeftNotHeld();
ReadUpLeftHeld();
GoUpLeftNormal();
GoUpLeftFast();

ReadDownLeft();
ReadDownLeftNotHeld();
ReadDownLeftHeld();
GoDownLeftNormal();
GoDownLeftFast();

ReadUpRight();
ReadUpRightNotHeld();
ReadUpRightHeld();
GoUpRightNormal();
GoUpRightFast();

ReadDownRight();
ReadDownRightNotHeld();
ReadDownRightHeld();
GoDownRightNormal();
GoDownRightFast();

Digit1Flash();
Digit2Flash();
Digit3Flash();
Digit4Flash();

PlayerLose();
}
