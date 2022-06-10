#include <stdio.h>
#include "pico/stdlib.h"

int main() {
  static const uint LED_PIN = 25;

  stdio_init_all();

  while (true) {
    printf("Hello, world!\n");
    sleep_ms(5000);
  }
}
