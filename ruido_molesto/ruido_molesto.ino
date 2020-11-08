/*
  Melody

  Plays a melody

  circuit:
  - 8 ohm speaker on digital pin 8

  created 21 Jan 2010
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Tone
*/

#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};
int notes;
// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

int led1 = 12;
int led2 = 10;

void setup() {
   pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  // iterate over the notes of the melody:
    for (int thisNote = 0; thisNote < 8; thisNote++) {
    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 100 / noteDurations[note];
    tone(8, thisNote[], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    //delay(10);
    // stop the tone playing:
    //noTone(8);
  }
}

void loop() {
  // no need to repeat the melody.
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(10);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(10);

  
  
  
}



