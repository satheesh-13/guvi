#include<stdio.h>
int main()
{
    int n,i,j,a[100],temp,flag=0,feq[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        feq[i]=0;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]==a[j])
        {
            a[i]=0;
            a[j]=0;
        }
        }
    }
    for(i=0;i<n;i++)
    {
      if(a[i]!=0)
       printf("%d",a[i]);
    }
    
}
