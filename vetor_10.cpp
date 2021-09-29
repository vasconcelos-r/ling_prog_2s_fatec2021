#include<stdio.h>
#include <string.h>


int main (){

    char n[3][20], conE =0, conA =0, tam =0;
    int i, j;

    for (i =0; i <3; i++){
        printf ("Digite um nome %d:  ", i +1);
        gets (n[i]);

    }

    for (i =0; i <3; i++){
        tam = strlen (n[i]);

        for (j =0; j <= tam -1; j++){
            if (n[i][j] == 'A'|| n[i][j] == 'a')
                conA++;
            if (n [i][j] ==  'E' || n[i][j] == 'e')
            conE++;
        }
    }

    printf("\n Ha %d letras A, %d letras E ", conA, conE);


    return 0;

}

