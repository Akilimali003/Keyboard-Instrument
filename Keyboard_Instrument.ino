
int notes[] = {262, 294, 330, 349};

//Initialization of variables
void setup() {
  Serial.begin(9600);
}

//put your setup here all your code will repeat in this loop
void loop() {
  int keyVal = analogRead(A0);
  Serial.println(keyVal);

  if(keyVal == 1023){
    tone(8, notes[3]);
  }
  else if(keyVal >= 990 && keyVal <= 1010){
    tone(8, notes[2]);
  }
  else if(keyVal >= 505 && keyVal <= 515){
    tone(8, notes[1]);
  }
  else if(keyVal >= 5 && keyVal <= 10){
    tone(8, notes[0]);
  }
  else{
    noTone(8);
  }
}
