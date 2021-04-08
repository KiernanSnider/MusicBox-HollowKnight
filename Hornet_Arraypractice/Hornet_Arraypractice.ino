/* SweetSideOfFries Arduino
   Hollow Knight Hornet    */

int section = 0;
int piezoPin = 6;
int tempoScale = 100;
void setup(void)
{
   pinMode(6, OUTPUT);//buzzer
   pinMode(13, OUTPUT);//LED note indicator
}

void loop()
{
  sing(3);
}


#define Bzero  31
#define C1  33
#define CS1 35
#define D1  37
#define DS1 39
#define E1  41
#define F1  44
#define FS1 46
#define G1  49
#define GS1 52
#define A1  55
#define AS1 58
#define Bone  62
#define C2  65
#define CS2 69
#define D2  73
#define DS2 78
#define E2  82
#define F2  87
#define FS2 93
#define G2  98
#define GS2 104
#define A2  110
#define AStwo 117
#define B2  123
#define C3  131
#define CS3 139
#define D3  147
#define DS3 156
#define E3  165
#define F3  175
#define FS3 185
#define G3  196
#define GS3 208
#define A3  220
#define AS3 233
#define B3  247
#define C4  262
#define CS4 277
#define D4  294
#define DS4 311
#define E4  330
#define F4  349
#define FS4 370
#define G4  392
#define GS4 415
#define A4  440
#define AS4 466
#define B4  494
#define C5  523
#define CS5 554
#define D5  587
#define DS5 622
#define E5  659
#define F5  698
#define FS5 740
#define G5  784
#define GS5 831
#define A5  880
#define AS5 932
#define B5  988
#define C6  1047
#define CS6 1109
#define D6  1175
#define DS6 1245
#define E6  1319
#define F6  1397
#define FS6 1480
#define G6  1568
#define GS6 1661
#define A6  1760
#define AS6 1865
#define B6  1976
#define C7  2093
#define CS7 2217
#define D7  2349
#define DS7 2489
#define E7  2637
#define F7  2794
#define FS7 2960
#define G7  3136
#define GS7 3322
#define A7  3520
#define AS7 3729
#define B7  3951
#define C8  4186
#define CS8 4435
#define D8  4699
#define DS8 4978

int hornetNote[] = {
  A4, E4, E4, E4, E4, E4,
  G4, F4, D4, E4, C4, B3,
  E4, E4, E4, E4, E4, E4,
  D4, C4, A3, C4, B3,
  E4, E4, E4, E4, E4, E4,
  G4, F4, D4, E4, C4, B3,
  E4, E4, E4, F4, F4, F4,
  G4, G4, G4, A4, A4, A4,
  B4, B4, B4, C5, C5, C5,
  D5, C5, B4, C5, B4, A4,
  D5, C5, B4, C5, B4, A4,
  E5, D5, C5, D5, C5, AS4,
  D5, C5, AS4, AS4, A4, G4, F4, E4, D4,
//measure14
  A4, E5,
  0,
  G5, F5, D5,
  E5, C5, B4,
  A4, D5,
  C5, B4,
  F4, G4, A4, B4, G4, A4, B4, C5, A4, B4, C5, D5,
  B4, C5, D5, E5, C5, D5, E5, F5, D5, E5, F5, G5,
  A5, E5, F5, GS5, A5, E5, F5, GS5, A5, E5, F5, GS5, 
  A5, E5, F5, GS5, A5, E5, F5, GS5, A5, E5, F5, GS5, 
  A5, F5, GS5, A5, B5, GS5, A5, B5, C6, A5, B5, C6,
  D6, B5, C6, D6, E6, D6, E6, F6, G6, E6, F6, G6,
  A6, D5,
  C5, B4,
  E5, E5, A4, E5, A4, A4,
  DS5, DS5, A4, DS5, A4, A4,
  A5, D6,
  C6, B5,
  E5, E5, A4, E5, A4, A4,
  DS5, DS5, A4, DS5, A4, A4,
  A4, D5,
  C5, B4,
  B4, E5,
  D5, B4,
  CS5, FS5,
  E5, DS5,
  E5, A4, A4, A4, A4, A4, 
  B4, B4, B4, C5, C5, C5,
//measure42
  A5, E4, E4, E4, E4, E4,
  G4, F4, D4, E4, C4, B3,
};
byte hornetTempo[] = {
//measure1
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 4, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 
//measure14
  6, 12,
  6,
  4, 4, 4, 
  4, 4, 4, 
  6, 6,
  6, 6,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  6, 6,
  6, 6,
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  6, 6,
  6, 6,
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2,//m33
  6, 6,
  6, 6,
  6, 6,
  6, 6,
  6, 6,
  6, 6,
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2,
//measure 42
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2,
  1, 1, 2, 2, 2, 2, 2,//m60
  2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2,
  1, 1, 2, 2, 2, 4,//m64
  1, 1, 2, 2, 2, 4,
//measure 66
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 2, 4, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 2, 4, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 2, 2,
//measure 76
  12,
  12,
  12,
  4, 4, 4, 
  12,
  12,
  2, 4, 2, 4,
  2, 4, 2, 4,
  2, 4, 2, 4,
  2, 4, 2, 4,
  2, 4, 2, 4,
  2, 4, 2, 4,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
//measure 90
  6, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 4, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 
  
  6, 12,
  6,
  4, 4, 4, 
  4, 4, 4, 
  6, 6,
  6, 6,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  6, 12,
  6,
  4, 4, 4, 
  4, 4, 4, 
  6, 6,
  6, 6,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  6, 6,
  6, 6,
  6, 6,
  6, 6,
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 
  3, 3, 3, 4, 4, 4, 
  12,
  9,
};

void sing(int s)
{
   section = s;

    if(section==3)
    {
     int size = sizeof(hornetNote) / sizeof(int);
       for (int thisNote = 0; thisNote < size; thisNote++)
       {
         // second divided by notetype
         int noteDuration = tempoScale * hornetTempo[thisNote];

         tone(piezoPin, hornetNote[thisNote],noteDuration);

         int pauseBetweenNotes = noteDuration * 1.05;
         delay(pauseBetweenNotes);
       }
    }
}
/*
void buzz(int targetPin, long frequency, long length) {
  digitalWrite(13,HIGH);
  long delayValue = 1000000/frequency/2; // calculate the delay value between transitions
  //// 1 second's worth of microseconds, divided by the frequency, then split in half since
  //// there are two phases to each cycle
  long numCycles = frequency * length/ 1000; // calculate the number of cycles for proper timing
  //// multiply frequency, which is really cycles per second, by the number of seconds to 
  //// get the total number of cycles to produce
  for (long i=0; i < numCycles; i++){ // for the calculated length of time...
    digitalWrite(targetPin,HIGH); // write the buzzer pin high to push out the diaphram
    delayMicroseconds(delayValue); // wait for the calculated delay value
    digitalWrite(targetPin,LOW); // write the buzzer pin low to pull back the diaphram
    delayMicroseconds(delayValue); // wait again or the calculated delay value
  }
  digitalWrite(13,LOW);
}
*/
