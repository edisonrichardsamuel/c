#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char ch;
	scanf("%c",&ch);
	if(isalpha(ch))
	{
		printf("\nAlphabet");
	}
	else
	{
		printf("\nNo");
	}
	return 0;
}
