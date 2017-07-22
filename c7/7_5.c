#include <stdio.h>


int main(void)
{
	void written_amount(long long int amount);
	long long int a;
    printf("你的数字:");
    
    while(1){
        scanf("%lld",&a);
        if(a <= 999999999999)
            break;
        else{
            printf("数据太大！\n");
            printf("你的数字:");
        }


    }

    if(a>0)
        written_amount(a);
    else if (a == 0)
        printf("零");
    else
    {
        printf("负 ");
        written_amount(-a);
    }	
	return 0;
}



long long int cifang(int a,int b)
{
    long long int n = 1;
    for (int i = 0; i < b; ++i)
        n *= a;
    return n;
}



void written_amount(long long amount)
{
    long long int cifang(int a,int b);
    long long int index = 0;
    int first = 0;
    int in_zero = 1;


	if (amount == 0){
	    printf("\n");
	}
	
    else{
		
        int group;
 
        for(int i = 1; i < 5; i++)
        {
            
            if (amount/cifang(10000,i) == 0)
            {
                group = amount / cifang(10000,i-1);
                amount = amount % cifang(10000,i-1);
                index = i;
                break;
            }
        }
        
        for (int i = 3; i >= 0; i--)
        {   
            int a;

            if((a = group /cifang(10,i)) == 0){
                if(first == 1 && in_zero){
                    printf("零");
                    in_zero = 0;
                }
                continue;
            }

            first = 1;

            group = group % cifang(10,i);


            
            switch(a)
            {
            	case 1:
            	printf("壹");
            	break;
            	case 2:
            	printf("贰");
            	break;
            	case 3:
            	printf("叁");
            	break;
            	case 4:
            	printf("肆");
            	break;
            	case 5:
            	printf("伍");
            	break;
            	case 6:
            	printf("陆");
            	break;
            	case 7:
            	printf("柒");
            	break;
            	case 8:
            	printf("仈");
            	break;
            	case 9:
            	printf("玖");
            	break;
            }


            switch(i)
            {
                case 1:
                   printf("十");
                   break;
                case 2:
                   printf("百");
                   break;
                case 3:
                   printf("千");
                   break;
            }
            

            if (group == 0)
            {
            switch(index)
               {
                case 1:
                index++;
                break;
                case 2:
               	printf("万");
                index += 1;
                break;
                case 3:
                index += 1;
               	printf("亿");
                break;
                }
            break;
            }


        }
		return written_amount(amount);
	}
      
}