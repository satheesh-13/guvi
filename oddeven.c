#include <stdio.h>
 
int main(void) {
	int n;
	scanf("%d",&n);
	if(n<0)
	 printf("invalid");
	else if(n%2==0)
	 printf("Even");
	else if(n%2==1)
	 printf("Odd");
	return 0;
}
