#include <stdio.h>
#include <stdlib.h>

int main() {
 int i;
 int *p = (int *)malloc(3 * sizeof(int));
 for (i = 0; i < 3; i++)
  *(p + i) = 3 - i;
 int *q = p;
 printf("%u\t", *++p);
 printf("%u\t", ++*p);
 printf("%u\t", p - q);
 return 0;
}

//output ___