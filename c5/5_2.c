#include <stdio.h>


int main(int argc, char const *argv[])
{
	int char_;

	while((char_ = getchar())!= EOF)
	{
		if (char_ < 123 && char_ > 95)
		{
			char_ += 13;
			if (char_ > 122)
			{
				char_ = char_ - 122 + 96;
			}
		}
	    else if(char_ < 91 && char_ > 64)
		{
			char_ += 13;
			if (char_ > 90)
			{
				char_ = char_ - 90 + 64;
			}
		}
	    
        printf("%c",char_);
	}

	return 0;
}