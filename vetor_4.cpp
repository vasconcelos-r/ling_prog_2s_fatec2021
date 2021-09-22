#include <stdio.h>
#include <math.h>

int main(){

    int vet[8], x, cont = 0, soma = 0, soma2 = 0;

    for (x = 0; x <= 7; x++){

        printf("\nDigite um valor: ");
        scanf("%d", &vet[x]);

        if (vet[x] > 30)
        {
            cont++;
            soma = soma + vet[x];
        }
    }

    for (x = 0; x <= 7; x++){
        printf("\t%d", vet[x]);
        printf("\n\n A Soma dos numeros maiores que 30 e : %d ", soma);
    }

    printf("\n\n %d Numeros sao maiores que 30", cont);


    for (x = 0; x <= 7; x++){
        soma2 = soma2 + vet[x];
    }

    printf("\n\n A Soma dos numeros digitados e : %d", soma2);

    return (0);
}
