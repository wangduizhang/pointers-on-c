#include <stdio.h>

int main()
{
	int number_array[10] = {3,545,6,78,454,12,8,78,1,2};
	int max;
    int find_max(int number_array[10]);


    max = find_max(number_array);
    printf("%d\n",max );
	return 0;
}



int find_max(int number_array[10])
{
	int i;
	int max = number_array[0];

	for (i = 1;i<10;i+=1)
		if (number_array[i] > max)
			max = number_array[i];
	return max;
}
