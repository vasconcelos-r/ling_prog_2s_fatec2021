#include<stdio.h>
#include<math.h>


int main (){

    float vet[5], vetc[5];
    int i;
     for(i =1; i <=5; i++) {
         printf("Digite um numero: ");
        scanf("%f", &vet[i]);
        printf("\n");
        vetc[i] = pow(vet[i], 3);
    }

    for (i = 0; i < 5; i++){
        printf("%3.2f\t", vetc[i]);
    }


    return 0;
}
