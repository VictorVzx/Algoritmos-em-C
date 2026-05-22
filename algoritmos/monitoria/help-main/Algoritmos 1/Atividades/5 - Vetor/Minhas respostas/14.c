#include <stdio.h>

int main(void){
    int vetor[10], x;

    for(int i = 0; i < 10; i++){
        printf("Digite o %dº o num: ", i+1);
        scanf("%d", &vetor[i]);
    }

    
    do {
        int achou = 0;
        printf("Digite o numero que vc quer buscar (-1 para sair): ");
        scanf("%d", &x);
        for(int i = 0; i < 10; i++){
            if(vetor[i] == x){
                achou = 1;
                printf("Achou! Posição %d\n ", i);
                break;
            }
        }
        if(achou == 0){
            printf("%d não está no vetor!\n", x);
        }
    } while(x != -1);

    return 0;
}