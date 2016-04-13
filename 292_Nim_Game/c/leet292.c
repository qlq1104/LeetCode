#include <stdbool.h>
#include <stdio.h>

bool canWinNim(int n) {
  return (n % 4 == 0);
}

int main()
{
  int i, testCase[] = {0, 1, 2, 4, 8, 9, 112, 439, 23234};
  for (i=0; i<9; i++) {
    printf("[%5d]:%d\n", testCase[i], (int)canWinNim(testCase[i]));
  }
  return 0;
}

