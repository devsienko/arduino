// Скетч мигает светодиодом. Автор: Даниил Евсиенко, создан 15.04.25

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); // настроить контакт 13 как цифровой выход
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); // включить напряжение на выходе 13
  delay(1000); // пауза в одну секунду
  digitalWrite(13, LOW); // выключить напряжение на выходе 13
  delay(4000); // пауза в одну секунду
}
