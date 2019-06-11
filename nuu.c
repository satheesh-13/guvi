#include<stdio.h>
int main()
{
    int n,i,j,a[100],temp,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==i)
        {
         printf("%d ",i);
         flag=1;
        }
    }
    if(flag==0) 
     printf("-1");
    
}
