const int right = 9;
const int left = 10;
const int down = 210;
const int up = 222;

void setup() {
 pinMode(right, OUTPUT);
 analogWrite(right, 15);
 analogWrite(left, 15);
 Serial.begin(9600);
}

void loop() {
  while (Serial.available() > 0) {
    //look for 0
    int said = Serial.read();
    if (said == 48) {
      Serial.println("Down...");
      analogWrite(right, down);
      analogWrite(left, down);
    }
    //look for 1
    if (said == 49) {
      Serial.println("Up...");
      analogWrite(right, up);
      analogWrite(left, up);
    }
  } 
}
