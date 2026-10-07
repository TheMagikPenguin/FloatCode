Piezo Code 
 

#define B3  247 

#define DS4 311 

 

 

 

#define FS4 370 

#define E4  330 

#define G4  392 

#define B4  494  

#define A4  440   

#define GS4 415 

#define C5  523 

  

int melody[] = { 

B3,  

    DS4, B3, FS4, B3, DS4, B3, FS4, B3, DS4, B3, FS4, B3, DS4, B3, FS4, B3, DS4, B3, FS4, B3, DS4, B3, FS4, B3, DS4, B3, FS4, B3, DS4, B3, FS4, B3, 

    E4, B3, G4, B3, E4, B3, G4, B3, E4, B3, G4, B3, E4, B3, G4, B3, E4, B3, G4, B3, E4, B3, G4, B3, E4, B3, G4, B3, E4, B3, G4, B3,  

    DS4, B3, FS4, B3, DS4, B3, FS4, B3, DS4, B3, FS4, B3, DS4, B3, FS4, B3, DS4, B3, FS4, B3, DS4, B3, FS4, B3, DS4, B3, FS4, B3, DS4, B3, FS4, B3, 

    E4, B3, G4, B3, E4, B3, G4, B3, E4, B3, G4, B3, E4, B3, G4, B3, E4, B3, G4, B3, E4, B3, G4, B3, E4, B3, G4, B3, E4, B3, G4, B3, B4, B3, A4, B3, GS4, B3, A4, B3, G4, B3, FS4, B3, G4, B3, E4, B3, 

FS4, B3, DS4, B3, E4, B3, DS4, B3, E4, B3, DS4, B3, E4, B3, DS4, B3, B4, B3, A4, B3, GS4, B3, A4, B3, GS4, B3, FS4, B3, GS4, B3, E4, B3, 

FS4, B3, DS4, B3, E4, B3, DS4, B3, E4, B3, DS4, B3, E4, B3, DS4, B3, B4, B3, A4, B3, GS4, B3, A4, B3, GS4, B3, FS4, B3, GS4, B3, E4, B3, 

FS4, B3, DS4, B3, E4, B3, DS4, B3, E4, B3, DS4, B3, E4, B3, DS4, B3, B4, B3, A4, B3, GS4, B3, A4, B3, GS4, B3, FS4, B3, GS4, B3, E4, B3, 

FS4, B3, DS4, B3, E4, B3, DS4, B3, E4, B3, DS4, B3, E4, B3, DS4, B3, 

B3, B3 

}; 

  

// note durations: 4 = quarter note, 8 = eighth note, etc.: 

int noteDurations[] = { 

  16, 

  16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16, 16, 

  16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16, 16, 

  16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16, 16, 

  16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16, 16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16, 

  16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16, 16, 

  16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16, 16, 

  16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16, 16, 

  16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,  

  4, 4 

}; 

  

const int buttonPin =8;  

  

void setup() { 

  pinMode(buttonPin, INPUT_PULLUP); 

} 

  

void loop() { 

  if (digitalRead(buttonPin) == LOW) { 

    int melodyLength = sizeof(melody) / sizeof(melody[0]); 

    for (int thisNote = 0; thisNote < melodyLength; thisNote++) { 

      int noteDuration = (1500 / noteDurations[thisNote]); 

      tone(8, melody[thisNote], noteDuration); 

      int pauseBetweenNotes = noteDuration; 

      if(noteDurations[thisNote] == 4){ 

        delay(pauseBetweenNotes * 1.5); 

      } else { 

        delay(pauseBetweenNotes * 1.1); 

      } 

      noTone(8); 

    } 

    } 

} 