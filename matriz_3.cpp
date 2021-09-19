#include<stdio.h>

int main()
{
    int li, co, soma=0, soma_diag;
    int matriz[3][3];

    printf("Digite os valores: \n");

    for(li=0; li<3; li++)
     {
        for(co=0; co<3; co++)
         {
           scanf("%d", &matriz[li][co]);
           soma= soma + matriz[li][co];
         }
     }

    printf("\nA soma dos valores: %d\n", soma);

    soma_diag = matriz[0][0] + matriz[1][1] + matriz[2][2];

    printf("A soma diagonal principal e : %d\n", soma_diag);
    return 0;
}
