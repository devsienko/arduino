// Проект 3 - Демонстрация ШИМ
int d = 5;

void setup() {
  // управление светодиодом, подключенным к контакту 3,
  // поддерживающему ШИМ
  pinMode(3, OUTPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:
  for ( int a = 0 ; a < 256 ; a++ )
  {
    analogWrite(3, a);
    delay(d);
  }
  for ( int a = 255 ; a >= 0 ; a-- )
  {
    analogWrite(3, a);
    delay(d);
  }
  delay(200);
}
