#include <stdio.h>
int main()
{
	int find_max(int range[10]);
	int sum_num(int a , int b);


	int a = 1;
	int b = 2;
	int range[10]={1,2,3,4,56,7,89,1,2,3};

    sum_num(b,a);
    printf("%d\n",find_max(range));
	return 0;
}

int sum_num(int a ,int b)
{
	printf("%d%d\n",a,b);
	return 0;
}


int find_max(int range[])
{
	int max = range[0];

	for (int i = 1; i < 10; ++i)
	    if (range[i]>max)
	        max = range[i];
	return max;
}