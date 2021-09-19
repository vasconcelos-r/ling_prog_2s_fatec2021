#include<stdio.h>
int main()

 {
  int i, j, mul[3][3];

 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
    {
      printf("Elemento [%d][%d]= ", i, j);
      scanf("%d", &mul[i][j]);
    }

  printf("\n  Valores originais da matriz \n");

  for(i=0; i<3; i++)
   {
     for(j=0; j<3; j++)
       printf("%d ", mul[i][j]);
       printf("\n");
   }

  for(i=0; i<3; i++)
  for(j=0; j<3; j++)
    {
      mul[i][j] = mul[i][j] * 5;
    }

   printf("\n Valores multiplicacao por 5 :\n");

   for(i=0; i<3; i++)
   {
      for(j=0; j<3; j++)

        printf("%d ", mul[i][j]);
        printf("\n");
    }
  return 0;
}
