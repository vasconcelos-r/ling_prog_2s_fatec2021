#include<stdio.h>
int main()
{
 int ma1[3][3], ma2[3][3], soma[3][3];
 int i, j;

 printf(" \n Informe os elementos de MA1\n\n");
 for(i=0; i<3 ;i++)
 for(j=0; j<3; j++)
   {
     printf("Elemento[%d][%d]= ", i, j);
     scanf("%d",&ma1[i][j]);
   }

  printf("\n  Valores de MA1 \n");

  for(i=0; i<3; i++)
    {
      for(j=0; j<3; j++)

        printf("%d ", ma1[i][j]);
        printf("\n");
  }

  printf("\n\n Informe os elementos de MA2 \n");

  for(i=0; i<3 ;i++)
  for(j=0; j<3; j++)
    {
      printf("Elemento[%d][%d]= ", i, j);
      scanf("%d", &ma2[i][j]);
    }


  printf("\n  Valores de MA2 \n");

  for(i=0; i<3; i++)
    {
      for(j=0; j<3; j++)
        printf("%d ", ma2[i][j]);
        printf("\n");
    }

  for(i=0; i<3; i++)
  for(j=0; j<3; j++)
    {
      soma[i][j] = ma1[i][j] + ma2[i][j];
    }
  printf("\n Matriz da soma \n  ");

  for(i=0; i<3; i++)
    {
      for(j=0; j<3; j++)
      printf("\t %d ", soma[i][j]);
      printf("\n");
  }
 return 0;
}
