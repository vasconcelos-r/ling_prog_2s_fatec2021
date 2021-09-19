#include<stdio.h>
int main()
{
 int matriz[3][3], i, j, q_par=0, q_impar=0;

 for(i=0; i<3; i++)
 for(j=0; j<3; j++)

   {
    printf("Elemento[%d][%d]= ", i, j);
    scanf("%d", &matriz[i][j]);
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
     if(matriz[i][j] %2==0)
      {
       q_par++;
       }else
         {
          q_impar++;
         }
  }

   printf("\n Quantidade de par : %d \n", q_par);
   printf("\n Quantidade de impar : %d \n", q_impar);

 return 0;
}
