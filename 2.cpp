#include <stdio.h>
#include <math.h>
int fuc(int a)
{
 int i;
 for(i=2;i<=sqrt(a);i++)
     if(a%i==0) return 0;
 return 1;
}

int main()
{
 int n,x,y,z;
 printf("请输入一个大于2的正整数:");
 while(scanf("%d",&n)!=EOF&&n>3)
 {
  
  if(n%2==0||((n<6)&&n%2==1))
  {
  for(x=2;x<=n/2;x++)
  {
   y=n-x;
   if (fuc(x)&&fuc(y))
   {
    z=0;
    printf("%d=%d+%d\n",n,x,y);
    break;
   }
  }
 }
  else
  {
   n-=3; 
  for(x=2;x<=n/2;x++)
  {
   y=n-x;
   if (fuc(x)&&fuc(y))
   {
    z=0;
    printf("%d=%d+%d+%d\n",n+3,x,y,3);
    break;
   }
  }
  printf("\n");
  }
}
return 0;
}
