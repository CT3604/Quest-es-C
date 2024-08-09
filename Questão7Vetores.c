#include <stdio.h>
#include <stdlib.h>

int main(){

    int x[10];
    int maior = 0;
    int menor = 0;

        printf("\nInsira numeros:\n");

            for(int i = 0; i < 10; i++){

                scanf("%d", & x[i]);

            }

    menor = x[0];

            for(int i = 0; i < 10; i++){

                    if(x[i] > maior){

                    maior = x[i];

                    }

                    if(x[i] < menor){

                    menor = x[i];

                    }

            }

        printf("\nMenor numero inserido: %d", menor);
        printf("\nMaior numero inserido: %d", maior);

return 0;

}