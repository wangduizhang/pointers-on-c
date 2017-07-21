#include <stdio.h>


int main(void)
{
	void copy_n(char dst[],char src[],int n);
	char dst[1000];
	char src[1000];
	int n;

    printf("输入你的字符串:\n");
    scanf("%s",src);
    printf("输入你要复制的字符数：\n");
    scanf("%d",&n);
    copy_n(dst,src,n);
    printf("%s\n",dst);
    
	return 0;
}


void copy_n(char dst[],char src[],int n)
{
	int index ;

	for (int i=0; i < n; ++i)
	{
		int c = src[i];
        index = i;

		if (c != '~')
		{
			dst[i] = c;
		}
		else
		    goto buquan;
	}
	buquan:
        for (int i = index; i < n; ++i)
        {
        	dst[i] = '~';
        }

}