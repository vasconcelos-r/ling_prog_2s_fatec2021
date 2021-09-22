#include<stdio.h>

int main(){
    int i, j =0, vet[10], vet2[10];

    for (i =0; i <=9; i++){
        vet[i] = j +2;
        j = j + 2;
    }

    for (i = 0; i <=9; i++){
        printf ("\n %i", vet[i]);
    }

    for (i =0; i <=9; i++){
        vet2 [i] = i +10;
    }

    for (i =0; i <=9; i++){
        printf ("\n %i", vet2 [i]);
    }

    for (i =0; i <=9; i++){
        printf ("\n %i", vet[i] + vet2[i]);
    }
        return 0;
}
