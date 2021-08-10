#define sensorPin A1

const float R1 = 14880;
const float R2 = 1466;
const float Uref = 4.66;
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
