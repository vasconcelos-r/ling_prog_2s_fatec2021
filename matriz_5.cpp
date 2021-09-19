#include<stdio.h>
int main()
{
 int sub[5][5],i,j;
 int v_par= +1 ,v_impar= -1;

 for(i=0; i<5; i++)
 for(j=0; j<5; j++)
    {
       printf("Digite o valor de [%d][%d] = ", i, j);
       scanf("%d", &sub[i][j]);

          if( sub [i][j] %2==0 )
          {
            sub [i][j] = v_par;
          }else
            sub [i][j] = v_impar;
      }

 printf("\n valores das substituicao sao: \n");

  for(i=0; i<5; i++)
  for(j=0; j<5; j++)

   {
     printf("sub[%d][%d]= %d",i ,j ,sub[i][j]);
     printf("\n");
   }
 return 0;
}
