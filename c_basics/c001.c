#include <stdio.h>
int main() {
 int a[] = {1, 3, 5, 7, 9};
 int i, count = 0;
 int *b = a + 4;
 for (i = 0; i < 5; i++)
  count = count + (*b-- - i);
 return 0;
}