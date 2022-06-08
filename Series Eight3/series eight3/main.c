
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{


    char names[6][100] = {"Ryan, Elizabeth 62","McIntyre, Osborne 84","DuMond, Kristin 18","Larson, Lois 42","Thorpe, Trinity 15","Ruiz, Pedro 35"};

    char temp[100];
    int i =0, j=0;

    for ( i = 0; i < 6; i++) {
        printf("names: %s \n",names[i]);
    }


    for( i = 1;i < 6;i++)
    {
        for( j=1;j < 6;j++)
        {
            if(strcmp(names[j-1],names[j])>0)
            {
                strcpy(temp,names[j-1]);
                strcpy(names[j-1],names[j]);
                strcpy(names[j],temp);
            }
        }
    }
    printf("Sorted names: \n");
    for( i = 0;i < 6;i++)
    {
        printf("names: %s \n",names[i]);
    }

    return 0;
}