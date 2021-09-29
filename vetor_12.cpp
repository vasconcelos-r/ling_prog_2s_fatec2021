#include<stdio.h>
#include<string.h>
#include<stdlib.h>

 int main (){

    float pr1[3], pr2[3], media[3];
    char name[3][30], name1[3][30], sit[3][20];
    int i, j =1;

    for (i =0; i <3; i++){
        printf ("Informe o nome do aluno :  ", i +1);
        gets (name[i]);
        printf ("Informe a nota do aluno :  ", j, name[i]);
        scanf ("%f", &pr1[i]);
        gets (name1[i]);
        j++;

        printf ("Informe a nota do aluno :  ", j, name[i]);
        scanf ("%f", &pr2[i]);
        gets (name1[i]);
         j =1;


    }

    for (i =0; i <3; i++){
        media[i] = (pr1[i] + pr2[i]) /2;

        if (media [i] >5)
        strcpy( sit[i], "Aprovado");

        else
            strcpy(sit[i],"Reprovado");
    }

     printf("\n\nNome\tNota1\t\tNota2\tMedia\tSituacao");
     printf("\n________________________________________________________________");
     for(i =0; i <3; i++)
 {
 printf("\n%s\t%3.2f\t\t%3.2f\t%3.2f\t%s",name[i],pr1[i],pr2[i],media[i],sit[i]);
 }
 printf("\n________________________________________________________________");



 return(0);

}
