#include <stdio.h>

int main(int argc, char const *argv[])
{
	int word;
	char string[100];
	int index = 0;

	while((word = getchar()) != 0)
	{
	    string[index] = word;
	    index++; 
	}

	return 0;
}