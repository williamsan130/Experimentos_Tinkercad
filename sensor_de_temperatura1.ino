int temperatura = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  if (-40 + 0.488155 * (analogRead(A0) - 20) < 20) {
    digitalWrite(6, LOW);
    digitalWrite(9, HIGH);
  }
  if (-40 + 0.488155 * (analogRead(A0) - 20) >= 30) {
    digitalWrite(6, HIGH);
    digitalWrite(9, LOW);
  }
  delay(10); //Atraso um pouco para melhorar o desempenho da simulação
}