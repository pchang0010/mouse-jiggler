#include <Mouse.h>

long randTimeout;

void setup() {
  Mouse.begin();
}

void loop() {
  delay(1000);
  while (true) {
    randTimeout = random(120000, 240000);
    Mouse.move(1, 0, 0);
    delay(10);
    Mouse.move(-2, 0, 0);
    delay(10);
    Mouse.move(1, 0, 0);
    delay(randTimeout);
  }
}
