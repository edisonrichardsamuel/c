#include <stdio.h>
#include<conio.h>
int main()
{
      int a[5],nn,o,sum=0;
      int i;
    printf("Enter array size:");
    scanf("%d",&nn);
    printf("enter element number whose sum should be found:");
    scanf("%d",&o);
    for(i=1;i<=nn;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=o;i++)
    {
        sum=sum+a[i];
    }
    printf("sum=%d",sum);


    return 0;
}
