char val;
void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
 
  if (val == 'a') {
    digitalWrite(13, HIGH);

  }
  else if (val == 'b') {
    digitalWrite(13, LOW);
  }
  else {

  }

}
