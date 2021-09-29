#include<stdio.h>
#include <string.h>

int main(){

    int i, j;
    char name[3][20], leA =0, leE =0, tam =0;

    for (i =0; i <3; i++){
        printf ("Digite o nome :  ");
        gets (name[i]);
    }

    for (i =0; i <3; i++){
        tam = strlen (name[i]);

        if (name [i][j] == 'A' || name [i][j] == 'a'){
            leA++;
        }
        if (name [i][j] == 'E' || name [i][j] == 'e'){
            leE++;
        }
    }

    printf ("\n Os nomes digitados tem %X letras A ", leA);
    printf ("\n Os nomes digitados tem %X letras A ", leE);

    return 0;
}
