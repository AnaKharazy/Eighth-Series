
#include <stdio.h>
#include <string.h>
int main()
{
    printf("\n enter two strings: ");
    char c1[99]={0}, c2[99]={0};
    int c, no=0,T=0;
    gets(c1);
    gets(c2);
    int a=strlen(c2);
    printf("%d",a);
    for(int i=0;i<strlen(c1)-strlen(c2);i++)
    {
    	for(int j=0;j<strlen(c2);j++)
    	{
    		if(c1[i+j]==c2[j])
    			T=1;
    		else
    		{
    			T=0;
    			break;
			}

		}
	}



}