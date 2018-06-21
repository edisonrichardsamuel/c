#include<stdio.h>
#include<conio.h>
void main()
{
    int a[25],n,i,k,sum=0;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("enter element number whose sum should be found:");
    scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=k;i++)
    {
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
}
