#include<stdio.h>
int pow1(int b)
{
    int ans=1,i;
    for(i=1;i<=b;i++)
    {
        ans=ans*10;
    }
    return ans;
}
int main()
{
    int n,rem,num=0,a[100],j,sum=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
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
    for(i=0;i<n;i++)
    {
        sum=sum+a[i]*pow1(i);
    }
    printf("%d",sum);
}
