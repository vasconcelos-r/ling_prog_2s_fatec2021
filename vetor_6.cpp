#include<stdio.h>

int main (){

    int vet[5], vet2[5], num, cont =0, i;

    printf ("\n vetor 1");

    for (i =0; i <=4; i++){
        cont =0 + i;
        printf ("\n [%d] Digite um valor: ", cont);
        scanf ("%d", &num);
        vet[i] = num;
    }

    printf ("\n vetor 2");

    for (i =0; i <=4; i++){
        cont =0 + i;
        printf ("\n [%d] Digite um valor: ", cont);
        scanf ("%d", &num);
        vet2[i] = num;
    }

    printf("\n vetor 1");

    for (i = 0; i <= 4; i++)

    printf("\t %d ", vet[i]);

    printf("\n vetor 2");

    for (i = 0; i <= 4; i++)

    printf("\t %d ", vet2[i]);

    printf("\t\n\n Soma:");

     for (i = 0; i <= 4; i++)
    printf("\t %d ", vet[i] + vet2[i]);

    return 0;


}
