//author: Thalita
//1116 - Dividindo X por Y
#include<stdio.h>
int main()
{
  int n, x, y, i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d %d",&x,&y);
      if(y == 0)
      {
        printf("divisao impossivel\n");
      }
      else
      {
        printf("%.1f\n",(float)x/y);  
      }
    }
  return 0;
}