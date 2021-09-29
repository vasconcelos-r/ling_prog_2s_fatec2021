#include <stdio.h>

int main(){


    int i, vet[11], t = 10;
    for (i =0; i <11; i++)
    {
        vet[i] = t;
        t++;
    }

    for (i =0; i <11; i++){
        printf("%d\t", vet[i]);
    }

    return 0;
}
