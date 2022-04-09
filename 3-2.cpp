#include<stdio.h>
#include<math.h>
int main()
{
	double a,b=0,n=0;
	while(n<100000)
	{
	   a=pow(-1,n)*(1/(1+n*n));
	   b=b+a;
	   n=n+1;
}
		printf("%f",b);
   
   return 0;
}
