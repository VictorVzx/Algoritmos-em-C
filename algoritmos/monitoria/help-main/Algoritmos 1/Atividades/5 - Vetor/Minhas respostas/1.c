#include <stdio.h>

int main(void){
    int vetor[10], indice, maior = 0;
    for(int i = 0; i < 10; i++){
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for(int i = 0; i < 10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            indice = i;
        }
    }

    printf("O maior valor é %d, na posição: %d", maior, indice);

    return 0;
}