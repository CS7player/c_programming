#include <stdio.h>

void main() {
 int a[] = {10, 20, 30, 40, 50};
 int *p[5] = {a, a + 1, a + 2, a + 3, a + 4};
 int **ptr = p;
 ptr++;
 *ptr++;
 *++ptr;
 printf("%d %d %d", ptr - p, *ptr - a, **ptr);
 return 0;
}

//output _____