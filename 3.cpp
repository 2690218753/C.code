#include <stdio.h>
int main()
{
	int n;
	char a[200];
	int b=0;
	scanf("%d",&n);
	while(n>1)
	{
		if(n%2==0){n=n/2;a[b]='^';b++;
		}else{n=n-1;a[b]='-';b++;}
	}
	printf("%d\n",b);
	int c=0;
	for(c;c<b;c++)
	{
		printf("%c",a[c]);
	}
}
