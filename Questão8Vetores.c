#include <stdio.h>
#include <stdlib.h>

int main(){ 

    float v[10];
    int quantN = 0;
    float somaP = 0.0;

    printf("\nInsira numeros:\n");

        for(int i = 0; i < 10; i++){

            scanf("%f", & v[i]);

        }

        for(int i = 0; i < 10; i++){

                if(v[i] > 0){

                somaP += v[i];

                }

                if(v[i] < 0){

                quantN++;

                }


        }

    printf("\nSoma dos numeros positivos inseridos: %.1f", somaP);
    printf("\nQuantidade de numeros negativos inseridos: %d", quantN);

return 0;

}