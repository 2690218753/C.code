#include <stdio.h>
int q(int b)
{
	int c=2;
	for(c;c<b;c++)
	{
		if(b%c==0)
		break;
	}
	if(c==b)
	return 1;
}
int main()
{
	int i,b=2,z=0;
	scanf("%d",&i);
	int a[200];
	int c=i;
	for(b;b<=i;b++)
	{
		if(q(i-b)==1&&q(b)==1)break;
		if(q(b)==1)
		{
			i=i-b;
			a[z]=b;
			z++;
		}
	}
	int s=0;
	printf("%d=",c);
	for(s;s<=z;s++)
	{
		printf("%d+",a[s]);
	}
	printf("%d",i-b);
}
