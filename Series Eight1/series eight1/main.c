
#include <stdio.h>

void fact_calc(int n)
{
	int i,f=1;
	if(n==0)
	{
		printf("* 0!= 1 *");
	}
	else
	{
		printf("* %d ! =",n);
		for(i=n;i>1;i--)
		{
			printf("%d * ",i);
			f*=i;
		}
		printf("1  ");
		printf(" = %d *",f);
	}

}
int main()
{
	int n;
	printf("\n enter a number: ");
	scanf("%d",&n);
	printf("************** \n");
	fact_calc(n);
	printf("\n************** ");

    return 0;
}