#include <stdio.h>

void func(int *p){
 ++*p++;
 ++*++p;
}

int main(){
 int a[]={5,4,3,2,1};
 func(a+2);
 printf("%d",a[2]+a[3]+a[4]);
 return 0;
}

//output _____