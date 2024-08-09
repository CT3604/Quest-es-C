#include <stdio.h>
#include <stdlib.h>

int main(){
     
    float n[5];
    float soma = 0.0;
    float media = 0.0;

        printf("Insira sua notas:\n");

            for(int i = 0; i < 5; i++){

                scanf("%f", & n[i]);

            soma += n[i];

            }

    media = soma / 5;

        printf("Sua media e: %.1f", media);
        printf("\nSuas notas:\n");

            for(int i = 0; i < 5; i++){

                printf("%.1f \t", n[i]);
            

            }

return 0;

}