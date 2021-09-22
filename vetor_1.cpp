#include<stdio.h>

int main(){

    int i, vet[8], num, n_digi = 0;

    for (int i = 0; i < 8; i++)
    {
        printf ("\n Digite um numero :  " , i + 1);
        scanf ("%i", &vet[i]);
    }
    printf ("\n\n\n");
    printf ("\n Digite um valor para ser pesquisado: ");
    scanf ("%i", &num);

    for (int i = 0; i < 8; i++){
        if (vet[i] == num){
            printf ("\n O numero %i esta na posicao %i", num, i +1);
            n_digi = 1;
        }
    }
    if (n_digi != 1)
        printf ("\n O numero informado não exite");

    return 0;
}
