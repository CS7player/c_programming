#include <stdio.h>

int f(int (*ptr)[3], int n) {
  if (n <= 1)
    return 0;
  return f(ptr + 1, n - 1) + **ptr;
}

int main() {
  int a[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  printf("%d\n", f(a, 3));
  return 0;
}

// output _____