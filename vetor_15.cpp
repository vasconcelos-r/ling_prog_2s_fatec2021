#include<stdio.h>
#include<math.h>

int main(){

    float vet[5], vetc[5];
    int i;

    for (i =0; i <5; i++){

        printf("\tDigite um numero: ");
        scanf("%f", &vet[i]);

        vetc[i] = pow(vet[i], 3);

        printf("\t%3.0f", vetc[i]);

        printf("\n");
    }

    return 0;
}
