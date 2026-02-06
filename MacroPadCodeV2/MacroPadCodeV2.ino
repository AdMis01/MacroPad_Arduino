#include <Keyboard.h>

bool last3 = HIGH;
bool last9 = HIGH;
bool last5 = HIGH;
bool last7 = HIGH;

const char ytLink[] = "https://www.youtube.com/watch?v=dQw4w9WgXcQ";

void setup() {
  pinMode(3, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);

  Keyboard.begin();
  delay(3000);
}

void loop() {

  bool s3 = digitalRead(3);
  if (last3 == HIGH && s3 == LOW) {

    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('t');
    Keyboard.releaseAll();
    delay(200);

    Keyboard.print(ytLink);
    delay(100);
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
  }
  last3 = s3;
  bool s9 = digitalRead(9);
  if (last9 == HIGH && s9 == LOW) {
    Keyboard.write('k');
  }
  last9 = s9;

  bool s5 = digitalRead(5);
  if (last5 == HIGH && s5 == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('t');
    Keyboard.releaseAll();
  }
  last5 = s5;

  bool s7 = digitalRead(7);
  if (last7 == HIGH && s7 == LOW) {
    Keyboard.write('f');
  }
  last7 = s7;

  delay(10);
}
