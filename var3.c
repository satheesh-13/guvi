#include<stdio.h>
int main()
{
    int n,i,j,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(((i)%2==0&&a[i-1]%2==0)||((i)%2==1 && a[i-1]%2==1))
         printf("%d ",a[i-1]);
    }
    
}
