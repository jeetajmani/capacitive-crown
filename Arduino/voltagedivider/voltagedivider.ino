// Conductive Band
#define SERIESRESISTOR 10000 // 10k ohms resistor used in the circuit
#define BANDPIN A0 // pin for the band's analog input

float bandValue = 0; // value of the band

void setup() {
  Serial.begin(9600); // se

}

void loop() {
    // voltage divider for conductive band
  bandValue = analogRead(BANDPIN);
  bandValue = (1023 / bandValue)  - 1;
  bandValue = SERIESRESISTOR / bandValue;
  Serial.println(bandValue);
  delay(50);


}
