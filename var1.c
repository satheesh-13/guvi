#include<stdio.h>
int main()
{
    int n,k,i,j,a[100],temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int flag=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(flag==0)
            if(a[i]==a[j])
            {
                printf("%d ",a[i]);
                a[i]=0;
                a[j]=0;
                flag=1;
            }
            else
             flag=0;
        }
    }
}
