#include <stdio.h>

int func(int *p,int n){
 int sum = *(p+4);
 for(int i=0;i<n-2;i++){
  sum = sum + *(p+i) + *p++;
 }
 return sum;
}

int main(){
 int a[]={7,1,3,5,2};
 int (*ptr)(int *,int) = func;
 printf("%d\n",(*ptr)(a,5));
 return 0;
}

//output ______