#include <stdio.h>

static int index = 0;

int main(int argc, char const *argv[])
{
	void reverse_string(char *string);
	char string[100];
    int word;

    
    while((word = getchar())!='\n' && index <99)
    {
        string[index] = word;
        index++;
    }
    reverse_string(string);

    printf("倒置：");
    for (int i = 0; i < index; ++i)
    	printf("%c",string[i]);
    printf("\n");

    

	return 0;
}


void reverse_string(char *string)
{
    char *p1;
    char *p2;
    
    p1 = string; 
    p2 = string + index-1;
    
    for (int i = 0; i < index/2; ++i)
    {
    	*p1  = *p1 ^ * p2;
    	*p2  = *p1 ^ * p2;
    	*p1  = *p1 ^ * p2;
    	p1++;
    	p2--;
    }
    

}