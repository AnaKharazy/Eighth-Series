
#include <stdio.h>

int main()
{
    printf("\n enter a verb: ");
    char ch[12];
    gets(ch);
    int a=strlen(ch);
    if(ch[a-1]=='e')
        ch[a]='d';
    else if((ch[a-1]=='s' &&ch[a-2]=='s') || (ch[a-1]=='h' &&ch[a-2]=='g'))
    {
        ch[a]='e';
        ch[a+1]='d';
        a++;
    }
    else
        printf("bi ghaede ");

    for(int i=0;i<=a;i++)
        printf("%c",ch[i]);

}