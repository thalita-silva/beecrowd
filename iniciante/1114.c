//author: Thalita
//1114 - Senha Fixa
#include<stdio.h>
int main()
{
  int i = 0, senha,senha_correta = 2002;
  scanf("%d",&senha);
  while(senha != senha_correta)
  {
    printf("Senha Invalida\n");
    scanf("%d",&senha);
    i++;
  }
  printf("Acesso Permitido\n");
  return 0;
}