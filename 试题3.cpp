#include<stdio.h>
int main()
{
	int a,i=0;
	printf("����:");
	scanf("%d",&a);
	printf("���裺");
	while(a!=1)
	{
		if(a%2==0)
		{
			a=a/2;
			i++;
			printf("^");
		}
		else
		{
			a=a-1;
			i++;
			printf("-");
		}
	}
	printf("\n");
	 printf("��С������%d",i);
}
