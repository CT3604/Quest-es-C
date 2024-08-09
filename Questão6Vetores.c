#include <stdio.h>
#include <stdlib.h>

int main(){

    int num[10];
    int quantPares = 0;

            for(int i = 0; i < 10; i++){

                scanf("%d", & num[i]);
                
            }

        printf("Numeros pares inseridos:\n");

            for(int i = 0; i < 10; i++){

                if(num[i] % 2 == 0){

                    printf("%d \t", num[i]);

                quantPares += 1;

                }

            }

        printf("\n%d numeros pares foram inseridos", quantPares);

return 0;   

}