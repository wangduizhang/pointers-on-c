#include <stdio.h>


int main(int argc, char const *argv[])
{
	void ten_to_two(unsigned long long int a,int two[128]);
	int two[128];
	int owt[128];
	int index = 1;
    unsigned long long int number;

    printf("输入你的数字：\n");
	scanf("%lld",&number);
	
	ten_to_two(number,two);
	printf("二进制:\n");
	for (int i = 0; i <128; i++)
	{
	    printf("%d",two[i]);
        if (index % 32 == 0)
         	printf("\n");
        else if (index % 8 == 0)
            printf("  ");
        index += 1;
    }
	printf("\n二进制(颠倒):\n");
	index = 1;

	for (int i = 127; i >= 0; i--)
	    owt[i] = two[127 - i];
	for (int i = 0; i <128; i++)
	{
	    printf("%d",owt[i]);        
        if (index % 32 == 0)
         	printf("\n");
        else if (index % 8 == 0)
            printf("  ");
        index += 1;
    }
    printf("\n");
	return 0;
}


void ten_to_two(unsigned long long int a,int two[128])
{
    int index;
    for (int i = 127; i >= 0; i--)
    {
    	index = i;
    	two[i] = a%2;
    	a = a/2;
    	if (a == 0)
    		goto buwei;
    }
    buwei:
        if (index > 0)
        	for (int i = index; i > -1; i--)
        		two[i] = 0;
        else
        	;
}