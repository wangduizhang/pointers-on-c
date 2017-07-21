#include <stdio.h>


int main(int argc, char const *argv[])
{
	int sum_number(int *number);

	int number[100] = {1,2,2,4,5,6,7,8};
    

	printf("%d\n",sum_number(number) );
	return 0;
}

int sum_number(int *number)
{   
    int num = 0;

    printf("changdu:%ld\n",sizeof(number));
	for (int i = 0; i < 100; ++i){

		num += number[i];
	    printf("%d\n",number[i] );
	}
	return num;
}