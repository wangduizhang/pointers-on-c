#include <stdio.h>

int main(int argc, char const *argv[])
{
	char *p;
	char a[7]= "dfsdfa";

	p = a;

	for (int i = 0; i < 4; ++i)
	    printf("%c\n",*++p );
	return 0;
}

/*

*++p  ==






*/