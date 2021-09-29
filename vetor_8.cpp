#include<stdio.h>

int main (){

    int vet[8], i, cont =0, m5 =0, nf =0, mv =0;
    float soma =0;

    for (i =0; i <=7; i++){

        printf ("Informe um numero %d:  ", i +1);
        scanf ("%d", &vet[i]);
    }

    for (i =0; i <=7; i++){
        printf ("\n %d", vet[i]);
        printf ("\n\n");
    }

    for (i =0; i <=7; i++){
        soma = soma + vet[i];

        if (vet[i] %5 ==0){
            m5++;
        }
        if (vet[i] > 10 && vet[i] <30){
            nf++;
        }
        if (vet[i] > mv){
            mv = vet[i];
        }
    }

    printf ("\n A media so vetor e: %3.1f", soma /8);
    printf ("\n Multiplos de 5 : %d", m5);
    printf ("\n Entre 10 e 30 : %d", nf);
    printf ("\n Maior numero : %d ",mv);

    return 0;
}
