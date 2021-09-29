#include<stdio.h>

int main (){

    int vet[8], i, cont =0;

    for (i =0; i <=7; i++){
        printf ("\n Digite um valor: ");
        scanf ("%d", &vet[i]);

        if ( vet[i] > 30){
            cont++;
        }
    }

    for (i =0; i <=7; i++){
        printf ("\n %d", vet[i]);
    }

    printf ("\t\n %d Sao maiores que 30 ", cont);

    return 0;
}
