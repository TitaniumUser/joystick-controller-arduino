#define VRX_PIN  A0  // Arduino pin connected to VRX pin
#define VRY_PIN  A1  // Arduino pin connected to VRY pin

int x = 0;  // To store the value of the X axis
int y = 0;  // To store the value of the Y axis

void setup() {
  Serial.begin(9600);
}

void loop() {
  // read analog X and analog Y values
  x = analogRead(VRX_PIN);
  y = analogRead(VRY_PIN);

  // print data to Serial Monitor on Arduino IDE
  Serial.print("x = ");
  Serial.print(x);
  Serial.print(", y = ");
  Serial.println(y);
  delay(200);
}
