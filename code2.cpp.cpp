#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<malloc.h>
int main()
{
		int m,n,x;
	srand(time(0)),
	m=rand()%(5)+3;
	n=rand()%(5)+3;
	printf("%d %d\n",m,n);//真随机生成两个2到8的数
	int i=0,j=0;
	int arr[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			arr[i][j]=rand()%10;
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
