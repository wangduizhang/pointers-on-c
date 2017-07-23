#include <stdio.h>

static int index = 0;

int main(int argc, char const *argv[])
{
	int function(int a);

	int a = 9;

	function(a);

	return 0;
}


int function(int a)
{
	if(a == 1)
		return 1;
	else{
		index++;
		printf("第%d次：a%d:%d\n",index,a,a);
		return a * function(a-1);
	}
}