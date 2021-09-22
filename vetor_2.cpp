#include<stdio.h>

int main(){

    int i, j = 0, vet [10];
    for (i = 0; i <=9; i++){
        vet[i] = j + 2;
        j = j + 2;
    }

    for (i = 0; i<=9; i++){
        printf ("\n %i", vet[i]);
        }
    return 0;
}
