#include<stdio.h>
int main()
{
    int n,i,j,a[1000];
    scanf("%d",&n);
    int sum=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum*a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",sum/a[i]);
    }
    
}
