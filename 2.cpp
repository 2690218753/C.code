#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n=rand()%6+2;
	int m=rand()%6+2;
	printf("%d %d\n",m,n);
	int arr[10][10]={{0}};
	int i=0,j=0;
	for(i=0;i<m;i++)
	{
		for(j;j<n;j++)
		{
			arr[i][j]=rand()%9+1;
		}
		j=0;
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
}
