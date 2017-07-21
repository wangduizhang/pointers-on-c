#include <stdio.h>

int main(int argc, char const *argv[])
{
    void changenumber(int *p);

	int *p;
	int a =5;

	p = &a;

	changenumber(p);

	printf("%d\n",a);


	return 0;
}

void changenumber(int *p)
{
    
    *p = 2;
}