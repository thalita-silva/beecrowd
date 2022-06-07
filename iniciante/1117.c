//author: Thalita
//1117 - Validação de Nota
#include<stdio.h>
int main()
{
  float nota = 0.0,soma_notas = 0.0;
  int cont_nota = 0;
  while(cont_nota != 2)
  {
    scanf("%f",&nota);
    if(nota >= 0 && nota <= 10.0)
    {
      cont_nota++;
      soma_notas += nota;
    }
    else
    {
      printf("nota invalida\n");
    }
  }
  printf("media = %.2f\n",soma_notas/cont_nota);
  return 0;
}
