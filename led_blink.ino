// Создаем переменную и присваиваем ей номер пина
const int LED = 12;

void setup() {
  // Переводим пин 12 в режим вывода
  pinMode(LED, OUTPUT);
}

void loop() {
  // 
  digitalWrite(LED, 1); // 1 = HIGH
  delay(2000); // ms
  digitalWrite(LED, 0); // 0 = LOW
  delay(2000);
}

/*
Ошибка:
---------
Error: cannot open port \\.\COM6: �������� � �������.

Error: unable to open port COM6 for programmer arduino
Не удалась загрузка: ошибка при загрузке: exit status 1
============================================================================
Решение:
---------
Переподключил шнур от платы в другой разъем ноутбука
*/
