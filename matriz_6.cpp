#include<stdio.h>
int main()
{
 int matriz[3][3], i, j, soma_par=0;

 for(i=0; i<3; i++)
 for(j=0; j<3; j++)

  {
    printf("Elementos[%d][%d]= ", i, j);
    scanf("%d",&matriz[i][j]);
  }


  printf("\n  Valores da matriz\n");

  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)

    printf("%d ", matriz[i][j]);
    printf("\n");
  }

  for(i=0; i<3; i++)
  for(j=0; j<3; j++)
  {
    if(matriz[i][j]%2==0)
     {
       soma_par = soma_par + matriz[i][j];
     }
  }

   printf("\n A soma dos elementos pares sao : %d \n",soma_par);

 return 0;
}
