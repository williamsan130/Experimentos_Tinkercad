int buttonState = 0;

int sensorValue = 0;


void setup()
{
  pinMode(2, INPUT);
  pinMode (A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // Leia o pino de entrada
  buttonState = digitalRead (2);
  // leia a entrada no pino analógico 0:
  sensorValue = analogRead (A0);
  // Imprimir valores para o monitor serial
  Serial.print(buttonState);
  Serial.print(",");
  Serial.println (sensorValue);
  delay (10); 
}