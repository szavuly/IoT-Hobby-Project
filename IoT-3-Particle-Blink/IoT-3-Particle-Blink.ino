// Particle Photon IoT Hobby Project
// -for science, you monster-
// Flash D7 LED

int LED = D7;

void setup() {
    pinMode(LED, OUTPUT);
}

void loop() {
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
}
