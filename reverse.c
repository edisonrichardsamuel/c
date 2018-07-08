#include <iostream.h>
using namespace std;
int main() {
int nn;
    int rem=0;
		int r=0;
		while(nn>0)
		{
			r=nn%10;
			nn=nn/10;
			rem=rem*10+r;
		}
		System.out.println(rem);
    return 0;
    }
