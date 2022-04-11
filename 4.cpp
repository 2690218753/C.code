#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a[n];
	int i=0,sum=0,t=0;
	for(i;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int b=1;
	while(b<=n-m)
	{
		i=1,t=0;
		for(i;i<m;i++)
		{
			if(a[i]<a[i-1]){t=a[i];
			}else t=a[i-1];
		}
		i=0;
		for(i;i<m;i++)
		{
			a[i]=a[i]-t;
			if(a[i]==0){
			a[i]=a[m-1+b];b++;}
		}
		sum=sum+t;
	}
	i=1;
	for(i;i<m;i++)
	{
		if(a[i]>a[i-1]){t=a[i];
		}else t=a[i-1];
	}
	sum=sum+t;
	printf("%d",sum);
}
