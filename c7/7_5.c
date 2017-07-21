#include <stdio.h>

static int index = 1;//标志位数

int main(void)
{
	void written_amount(unsigned int amount,char (*buffer)[5]);
	unsigned int a;

	char buffer[1024][5] = {
		{'s','s','s','s','s'},
		{'s','s','s','s','s'},
	};

	char (*p)[5] = buffer;
    a = 221545;
    
    written_amount(a , p+1023);
	
	return 0;
}


void written_amount(unsigned int amount,char (*buffer)[5])
{

	if (amount == 0){
	    for (int i = 0; i < 1024; ++i)
	        printf("%s",buffer[i]);
	    printf("\n");
	}
	else{
		int group = amount % 10000;
        for (int i = 0; i < 4; ++i)
        {
            int a = group % 10;
            group /= 10;

            if (a == 0 && i != 0)
            	continue;
            switch(i)
            {
            	case 1:
            	   *buffer = "十";
            	   buffer--;
            	   break;
            	case 2:
            	   buffer = "百";
            	   buffer--;
            	   break;
            	case 3:
            	   buffer = "千";
            	   buffer--;
            	   break;
            }
            
            switch(a)
            {
            	case 0:
            	buffer = "零";
            	buffer--;
            	break;
            	case 1:
            	buffer = "壹";
            	buffer--;
            	break;
            	case 2:
            	buffer = "贰";
            	buffer--;
            	break;
            	case 3:
            	buffer = "叁";
            	buffer--;
            	break;
            	case 4:
            	buffer = "肆";
            	buffer--;
            	break;
            	case 5:
            	buffer = "伍";
            	buffer--;
            	break;
            	case 6:
            	buffer = "陆";
            	buffer--;
            	break;
            	case 7:
            	buffer = "柒";
            	buffer--;
            	break;
            	case 8:
            	buffer = "仈";
            	buffer--;
            	break;
            	case 9:
            	buffer = "玖";
            	buffer--;
            	break;
            }
            if (group == 0)
            {
                index += 1;
                switch(index)
               {case 2:
               	buffer = "万";
               	buffer--;
                break;
                case 3:
               	buffer = "亿";
               	buffer--;
                break;
                }
                break;
            }
        }
           
		return written_amount(amount/10000, buffer);
	}
      
}