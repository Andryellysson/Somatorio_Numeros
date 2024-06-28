/*Desenvolva um algotimo que some todos os números
 inteiros compreedidos entre 1 e 10*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    
    int soma, i;
    soma = 0;

    for(i = 1; i <=10; i++){
        soma = soma + i;
    }

    printf("Soma: %d.\n", soma);

    return 0;
}