#include <stdio.h>
int main(){
 int a[] = {1,2,3,4,5};
 int *ptr = a;
 ptr += sizeof(2*a[0]);
 printf("%d",*(ptr-2));
 return 0;
}

//(Int size is 4) the output is ___