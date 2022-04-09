#include<stdio.h>
int main()
{
	int a,i=0;
	printf("输入:");
	scanf("%d",&a);
	printf("步骤：");
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
	 printf("最小步数：%d",i);
}
