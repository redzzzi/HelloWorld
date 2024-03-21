#include <stdio.h>
#include <stdbool.h>

int main() {
  int x = 0;

  if (true) {
    x = 2;
    x += x;
  } else {
    x = 3;
    x *= x;
  }
  printf("%d\n", x);

  return 0;
}
