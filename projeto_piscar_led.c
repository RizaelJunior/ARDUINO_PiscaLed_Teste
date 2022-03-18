int ledPin = 9;

void setup() {
pinMode(ledPin, OUTPUT);
}
void loop() {
digitalWrite(ledPin, HIGH);//Coloca led em alto nível (5V)
delay(2000);//Espera 1000 milissegundos (2 segundo)
digitalWrite(ledPin, LOW);//Coloca led em baixo nível (0V)
delay(2000);//Espera 1000 milissegundos (2 segundo)
}