#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>

SoftwareSerial mySerial(10, 11); // RX, TX
DFRobotDFPlayerMini myDFPlayer;

int pirPin = 2;

void setup() {
  pinMode(pirPin, INPUT);
  mySerial.begin(9600);
  Serial.begin(9600);

  if (!myDFPlayer.begin(mySerial)) {
    Serial.println("Error al iniciar DFPlayer");
    while(true);
  }
  myDFPlayer.volume(25); // Volumen (0-30)
}

void loop() {
  if (digitalRead(pirPin) == HIGH) {
    Serial.println("Movimiento detectado");
    myDFPlayer.play(1); // Reproduce 0001.mp3
    delay(5000); // Espera para no repetir inmediatamente
  }
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
