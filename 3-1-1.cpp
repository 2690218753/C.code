#include<stdio.h>
int main()
{
	int n,d;
	int a,b,c;
	printf("ѡ��˵�\n");
	scanf("%d",&n);
	switch(n)
		{
	    case 1:printf("���������ĺ�\n");
	           scanf("%d%d",&a,&b);
	           c=a+b;
 	           printf("%d",c);
		       break;
		case 2:printf("���������Ĳ�\n");
		       scanf("%d%d",&a,&b);
	           c=a-b;
	           printf("%d",c);
		       break;
		case 3:printf("�����������̺�����\n");
		       scanf("%d%d",&a,&b);
		       c=a/b;
		       d=a%b;
		       printf("%d%d",c,d);
			   break;
		case 4:printf("���������ĵ���֮��\n");
		       scanf("%d%d",&a,&b);
	           c=1/a+1/b;
	           printf("%d",c);
			break;
	    }
	return 0;
	}
