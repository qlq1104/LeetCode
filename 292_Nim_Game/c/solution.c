#include <stdbool.h>
#include <stdio.h>

bool canWinNim(int n) {
  return (n % 4 == 0);
}

int main() {
  int i, cases[] = {0, 1, 2, 4, 8, 9, 112, 439, 23234};
 
  for (i=0; i<sizeof(cases)/sizeof(int); i++) {
    printf("[%5d]:%d\n", cases[i], canWinNim(cases[i]));
  }

  return 0;
}
