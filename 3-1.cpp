#include<stdio.h>
int main()
{

	for(;;)
	{
    int n;
	float a,b,c;
	char ch;
	printf("ѡ��˵�\n");
	printf("  1 ���������ĺ�\n");
	printf("  2 ���������Ĳ�\n");
	printf("  3 ������������\n");
	printf("  4 ���������ĵ�����\n");
	printf("  0 �˳�ϵͳ\n");
	scanf("%d",&n);
		getchar();
	switch(n)
		{
		case 0:return 0;
	    case 1:printf("���������ĺ�\n");
	           scanf("%f%f",&a,&b);
	           c=a+b;
 	           printf("%f\n",c);
		       break;
		case 2:printf("���������Ĳ�\n");
		       scanf("%f%f",&a,&b);
	           c=a-b;
	           printf("%f\n",c);
		       break;
		case 3:printf("�����������̺�����\n");
		       scanf("%f%f",&a,&b);
		       c=a/b;
		       printf("%f\n",c);
			   break;
		case 4:printf("���������ĵ���֮��\n");
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

