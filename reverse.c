#include <stdio.h>
#include<string.h>
int main(void) {
	char a[1000];
	int i;
	scanf("%s",a);
	int n=strlen(a);
	for(i=n-1;i>=0;i--)
	 printf("%c",a[i]);
}
 
