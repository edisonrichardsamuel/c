#include <iostream>
using namespace std;
int main() {
	int a,b,sum=0,i;
  printf("enter the start value");
	scanf("%d",&a);
	printf("enter the end value");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		sum=sum+i;
	}
	printf("\nsum=%d",sum);
	return 0;
}
