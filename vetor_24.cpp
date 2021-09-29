#include <stdio.h>

 int main(){

    int i, vet[11], t = 10;
    for (i =0; i <11; i++)
    {
        vet[i] = t;
        t++;
    }
    printf("\n\n");

   for (i =10; i >=0; i = i -2)
        printf("%d\t", vet[i]);

    printf("\n");
    return (0);
}
