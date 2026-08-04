#include <stdio.h>
int main() {
 int a[] = {1, 3, 5, 7, 9};
 int i, count = 0;
 int *b = a + 4;
 for (i = 0; i < 5; i++)
  count = count + (*b---i);
 printf("%d\n",count);
 return 0;
}

//The final value of count is ______


// Operator 	Meaning	           Precedence	   Associativity
// b--      	Postfix decrement	  Highest	     Left to Right
// *	        Dereference	         Next	       Right to Left