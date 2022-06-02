//author: Thalita
//1101 - Sequência de Números e Soma
#include<stdio.h>
int main()
{
  int m = 1, n = 1, x, sum;
  while((m > 0) && (n > 0))
  {
    sum = 0;
    scanf("%d %d",&m,&n);
    if((m > 0) && (n > 0))
    {
      if(m > n)
      {
        for(x = n; x <= m; x++)
          {
            sum += x;
            printf("%d ",x);
          }
        printf("Sum=%d\n",sum);
      }
      else if(n > m)
      {
        for(x = m; x <= n; x++)
          {
            sum += x;
            printf("%d ",x);
          }
        printf("Sum=%d\n",sum);
      }
      
    }  
  }
  return 0;
}