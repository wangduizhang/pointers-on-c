#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	char zimu[100][1000];
	int line = 0;
    int index = 0;
    int someone ;
    bool rget = true;

    do{
       
       zimu[line][index]=(someone = getchar());
       
       if (someone == '\n'){
            if (index == 0)
            	break;
            line++;
            index = 0;
            continue;
        }
        index++;
    
    }while(rget);
    
    for (int i = 0; i < line; ++i)
     	printf("第%d行:%s",i+1,zimu[i]);

	return 0;
}