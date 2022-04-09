#include<stdio.h>
int main()
{

	for(;;)
	{
    int n;
	float a,b,c;
	char ch;
	printf("选择菜单\n");
	printf("  1 求两个数的和\n");
	printf("  2 求两个数的差\n");
	printf("  3 求两个数的商\n");
	printf("  4 求两个数的倒数和\n");
	printf("  0 退出系统\n");
	scanf("%d",&n);
		getchar();
	switch(n)
		{
		case 0:return 0;
	    case 1:printf("求两个数的和\n");
	           scanf("%f%f",&a,&b);
	           c=a+b;
 	           printf("%f\n",c);
		       break;
		case 2:printf("求两个数的差\n");
		       scanf("%f%f",&a,&b);
	           c=a-b;
	           printf("%f\n",c);
		       break;
		case 3:printf("求两个数的商和余数\n");
		       scanf("%f%f",&a,&b);
		       c=a/b;
		       printf("%f\n",c);
			   break;
		case 4:printf("求两个数的倒数之和\n");
		       scanf("%f%f",&a,&b);
	           c=1/a+1/b;
	           printf("%f\n",c);
			break;
	    }
	    ch=getchar();
	    if(ch=='q')
	    break;
	}
}

