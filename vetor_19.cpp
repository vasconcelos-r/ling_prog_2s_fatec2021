#include <stdio.h>
#include <math.h>

 int main(){

    int i;
    float vetc[5], vet[5];

    for (i =0; i <5; i++){
        printf("Digite um numero: ");
        scanf("%f", &vet[i]);
        printf("\n");

        vetc[i] = pow(vet[i], 3);
    }

    for (i =0; i <5; i++){
        printf("%2.2f\t", vetc[i]);
    }
    printf("\n");
    return 0;
}
