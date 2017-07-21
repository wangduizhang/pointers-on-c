#include <stdio.h>

int main(void)
{
	int gcd(int m, int n);

	int m = 36;
	int n = 54;
	
    printf("%d\n",gcd(m,n));
	return 0;
}


int gcd(int m,int n)
{
	if (m % n == 0)
		return n;
	else
		return gcd(n ,m%n);
}