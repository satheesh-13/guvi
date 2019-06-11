#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long long int s=1;
    for(i=1;i<=n;i++)
    {
        s=s*i;
    }
   printf("%lld",s); 
}
