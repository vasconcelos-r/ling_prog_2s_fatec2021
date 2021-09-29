#include<stdio.h>

int main (){

    int i, vet[6];

    for (i =1; i <=6; i++){
        printf ("\n Digite um  numero:   ");
        scanf ("%d", &vet[i]);
    }

    for (i =1; i <=6; i++){
        printf ("%d \n" , vet[i]);
    }


return 0;
}
