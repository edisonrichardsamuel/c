#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  if(a>b&&a>c)
	  printf("%d",a);
  if(b>a&&b>c)
	  printf("%d",b);
  else
	  printf("%d",c);
}
