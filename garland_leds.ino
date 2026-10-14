// Создаем массив с номерами пинов
// Нумерация элементов массива начинается с нуля (0)
const int LEDS[] = {2, 3, 4, 5, 6, 7, 8, 9}; 
// Создаем последний элемент, который будет включен,
// помним про массив, который начинается с нуля (0)
int lastElement = 7;

void setup() {
  // Создаем конструкцию, через которую пропустим массив в режим выхода
  // В цикле создаем переменную - el
  // далее условие, переменная проходит через весь массив
  // с каждым циклом увеличиваем на 1 (el++)
  for (int el = 0;  el < 8; el++) {
    pinMode(LEDS[el], OUTPUT);
  }
}

void loop() {
  // Выполняем попеременные мигания светодиодами
  for (int el = 0; el < 8; el++) {
    digitalWrite(LEDS[el], HIGH);
    delay(100);

    if (el == lastElement) {
      --lastElement;
      break;
    }

    digitalWrite(LEDS[el], LOW);
    delay(100);
  }

  if (lastElement < 0) {
    for (int el = 0; el < 8; el++) {
      digitalWrite(LEDS[el], LOW);
      delay(200);
    }
    lastElement = 8;

  }
}
