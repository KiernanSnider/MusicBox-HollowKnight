/* SweetSideOfFries Arduino
   Hollow Knight Hornet    */

int s = 1, buzz = 11;

void setup(void)
{
   pinMode(buzz, OUTPUT);//buzzer
}

void loop()
{
  sing(1);
}

#define B0  31
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
#define B1  62
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
#define AS2 117
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

int hornet[] = {
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
  2, 2, 2, 2, 2, 2,
  6, 6,
  6, 6,
  6, 6,
  6, 6,
  6, 6,
  6, 6,
  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2,

  2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2,
};

void sing(int s){
  if(s==1){
    int size = sizeof(hornet) / sizeof(int);
    for (int thisNote = 0; thisNote < size; thisNote++){
      int noteDuration = 100 * hornetTempo[thisNote];
      
      tone(buzz, hornet[thisNote],noteDuration);
      
      int pauseBetweenNotes = noteDuration * 1.05;
      delay(pauseBetweenNotes);
    }
  }
}
