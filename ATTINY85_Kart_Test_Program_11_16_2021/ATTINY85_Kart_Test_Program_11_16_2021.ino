// ATTINY85 Kart Test Program Mrwizzzard1 12 6 2022
  int goodKart = 0; // Green LED Pin
  int shortKart = 1; // Red LED Pin
  int openKart = 2; // Yellow LED Pin
  int senseKart = 3; // Analog Input Pin
  int valueKart = 0; // Analog Input Variable
  void setup() {
  pinMode (goodKart, OUTPUT); // Set LED Pins to OUTPUT
  pinMode (shortKart, OUTPUT);
  pinMode (openKart, OUTPUT);
  pinMode (senseKart, INPUT); // Set Analog Input Pin to INPUT
  digitalWrite(goodKart,LOW); // Turn Off All LEDs
  digitalWrite(shortKart,LOW);
  digitalWrite(openKart,LOW);
}
void loop() {
  delay(100); // Wait .1 Seconds
  valueKart = analogRead(senseKart); // Read Analog Input Value 
  if (valueKart >= 714) {  // Check for Open Kart
      digitalWrite(openKart, HIGH); // Turn On Open Yellow LED
       digitalWrite(goodKart,LOW);
       digitalWrite(shortKart,LOW); }
    else if (valueKart <= 306) {  // Check for Shorted Kart
       digitalWrite (shortKart, HIGH); // Turn on Shorted Red  LED
       digitalWrite(goodKart,LOW);
       digitalWrite(openKart,LOW);  }       
    else { // Good Kart
       digitalWrite(goodKart, HIGH); // // Turn on Good Green LED
       digitalWrite(shortKart,LOW);
       digitalWrite(openKart,LOW); }      
}
