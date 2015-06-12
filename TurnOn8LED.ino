
// Explicit for pin Output
int ledPins[] = {6, 7, 8, 9, 10, 11, 12, 13};

void setup() {

  for (int i=0; i<=7; i++) {
  
    pinMode(ledPins[i], OUTPUT);  //Setup pin Output
    
  } //for
  
} //setup

void loop() {

  ledNext();
  
  ledBack();

} //loop

void ledNext() {

  int delayTime = 100;
  
  for(int i=0; i<=7; i++) {
  
    digitalWrite(ledPins[i], HIGH);
    delay(delayTime);
  
  } //for
  
  

} //ledNext

void ledBack() {

  for(int i=0; i<=7; i++) {
  
    digitalWrite(ledPins[i], LOW);
    delay(100);
  
  } //for

} //ledBack




