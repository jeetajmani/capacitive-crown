const int braidButtonPin = 18;
bool braidTouched = false;

void setup() {
  pinMode(braidButtonPin, INPUT_PULLUP);  // internal pull-up
  Serial.begin(115200);
}

void loop() {
  int state = digitalRead(braidButtonPin);

  if (state == LOW && !braidTouched) {
    Serial.println("1");
  } else {
    Serial.println("0");
  }

  delay(50); 
}
