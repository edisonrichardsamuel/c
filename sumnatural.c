#include <iostream>
using namespace std;
int main() {
	int b,sum=0,i;
 	printf("enter the end value");
	scanf("%d",&b);
	for(i=0;i<=b;i++)
	{
		sum=sum+i;
	}
	printf("\nsum=%d",sum);
	return 0;
}
