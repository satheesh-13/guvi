#include <stdio.h>
#include<string.h>
int main(void) {
	int n,rev,num,last;
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
	    last=n%10;
	    rev=rev*10+last;
	    n=n/10;
	}
	printf("%d",rev);
}
 
