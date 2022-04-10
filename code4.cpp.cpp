#include "stdio.h"
#define MAX 1000
int main()
{
 int M,N,i,j,max=0;
 int w[MAX]={0},c[MAX]={0};//N为同学数目，M为机器数目 
 scanf("%d%d",&M,&N);
 for(i=0;i<N;i++)
 {
 scanf("%d",&w[i]);
 }
 for(i=0;i<M;i++)
 {
  c[w[i]]++;
  if(max < w[i])
  {
   max = w[i];
  }
 }
  for(i=M;i<N;i++)
 {
  for(j=1;j<=100;j++)
  if(c[j])
  {
  break;
  }
  c[j]--;
  c[j+w[i]]++;
       if(max < j+w[i])
  {
  max = j+w[i];
     }
 }
     printf("%d\n",max);
     return 0;
 }
 
