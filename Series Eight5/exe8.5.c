#include<stdio.h>
#define MAX_CHAR 80
typedef struct person
{
    char sureName[MAX_CHAR];
    char firstName[MAX_CHAR];
    char middle_init[MAX_CHAR];
};



int main()
{
    FILE *fp;
    struct person p1,p2;

    fp = fopen("read.txt","r");

    if(fp == NULL)
    {
        printf("file does not exist.");
        exit(1);
    }
    fread(&p1.sureName,sizeof(char),15,fp);

    fseek(fp,5,SEEK_CUR);
    fread(&p1.firstName,sizeof(char),4,fp);

    fseek(fp,0,SEEK_CUR);
    fread(&p1.middle_init,sizeof(char),2,fp);

    fseek(fp,29,SEEK_SET);
    fread(&p2.sureName,sizeof(char),3,fp);

    fseek(fp,2,SEEK_CUR);
    fread(&p2.firstName,sizeof(char),1,fp);

    fseek(fp,2,SEEK_CUR);
    fread(&p2.middle_init,sizeof(char),1,fp);

    fclose(fp);


    FILE *fw = fopen("write.txt","w");
    if(fw == NULL)
    {
        printf("file does not exist.");
        exit(1);
    }
    fprintf(fw,"%s \t %s \t %s \n",p1.sureName,p1.firstName,p1.middle_init);
    fprintf(fw,"%s \t %s \t %s \n",p2.sureName,p2.firstName,p2.middle_init);
    fclose(fw);
    printf("process finish!");











    return 0;
}
