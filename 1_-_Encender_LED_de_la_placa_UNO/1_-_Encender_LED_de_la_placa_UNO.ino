//Parpadeo de LED de la placa UNO
void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); //Enciendo el led
  delay(2000);  //Espero 2 segundos
  digitalWrite(13, LOW); //Apago el led
  delay(2000); //Espero 2 segundos
}
