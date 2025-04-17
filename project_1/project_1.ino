int d = 250;

void setup() {
  pinMode(2, OUTPUT); // настроить контакты,
  pinMode(3, OUTPUT); // управляющие светодиодами,
  pinMode(4, OUTPUT); // на работу в режиме
  pinMode(5, OUTPUT); // цифровых выходов
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH); // Включить светодиод 1
  delay(d); // ждать полсекунды
  digitalWrite(2, LOW); // Выключить светодиод 1
  digitalWrite(3, HIGH); // и повторить то же самое
  delay(d); // для светодиодов со 2-го по 5-й
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(d);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(d);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(d);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(d);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  delay(d);
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  delay(d);
  digitalWrite(3, LOW);
  // в этой точке функция loop() завершится
  // и будет вызвана снова
}
