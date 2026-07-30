#include <stdio.h>

void main() {
 int a[] = {50, 30, 10, 20, 40};
 int *p[5] = {a + 3, a + 2, a, a + 4, a + 1};
 int **q = p;
 printf("%u", **q);
 printf("%u", *++q - a);
 printf("%u", q++ - p);
}

//output ___