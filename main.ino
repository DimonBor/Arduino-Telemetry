#define sensorPin A1

const float R1 = 14910;
const float R2 = 1472;
const float Uref = 4.69;
float Uin = Uref * ((R1+R2)/R2), sensorValue, outputValue;

void setup() {
 Serial.begin(9600);
}

void loop() {

  sensorValue = analogRead(sensorPin);
  outputValue = (sensorValue * Uin) / 1024.00;

  Serial.println(outputValue);

  delay(1000);
}
