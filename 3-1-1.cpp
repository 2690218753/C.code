#include<stdio.h>
int main()
{
	int n,d;
	int a,b,c;
	printf("选择菜单\n");
	scanf("%d",&n);
	switch(n)
		{
	    case 1:printf("求两个数的和\n");
	           scanf("%d%d",&a,&b);
	           c=a+b;
 	           printf("%d",c);
		       break;
		case 2:printf("求两个数的差\n");
		       scanf("%d%d",&a,&b);
	           c=a-b;
	           printf("%d",c);
		       break;
		case 3:printf("求两个数的商和余数\n");
		       scanf("%d%d",&a,&b);
		       c=a/b;
		       d=a%b;
		       printf("%d%d",c,d);
			   break;
		case 4:printf("求两个数的倒数之和\n");
		       scanf("%d%d",&a,&b);
	           c=1/a+1/b;
	           printf("%d",c);
			break;
	    }
	return 0;
	}
