#include<stdio.h>


char *reverse(char *str)
{
	if( !str )
	{
		return NULL;
	}

    int len = strlen(str);
    if( len > 1 )
    {
        char ctemp =str[0];
        str[0] = str[len-1];
        str[len-1] = 0;
        reverse(str+1); 
        str[len-1] = ctemp;
    }

    return str;
}

int main()
{
    char str[] = "123456";

    puts(reverse(str));
}