#include<stdio.h>

int main (){

    char name[3][20];
    int i;

    for (i =0; i <=2; i++){
        printf ("\n Digite um nome : %d ", i, (i +1));
        gets (name [i]);
    }

    for (i =0; i<=2; i++){
        printf ("\n %s", name[i], i);
    }
    return 0;
}
