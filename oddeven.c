#include <stdio.h>
 
int main(void) {
	long int n;
	scanf("l%d",&n);
	if(n<0)
	 printf("invalid");
	else if(n%2==0)
	 printf("Even");
	else if(n%2==1)
	 printf("Odd");
	return 0;
}
