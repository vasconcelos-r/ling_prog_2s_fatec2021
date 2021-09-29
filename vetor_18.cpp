#include <stdio.h>

int main(){

    int i, j, vet[11], t = 10;

    for (i =0; i <11; i++){
        vet[i] = t;
        t++;
    }

    for (j =1; j <11; j = j +2){
        printf("%d\t", vet[j]);
    }

    return 0;
}
