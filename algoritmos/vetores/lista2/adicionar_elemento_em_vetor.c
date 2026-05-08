#include <stdio.h>

// problema: adicionar elemento em um vetor de 5 numero positivos

int main(void){
    int numsList[] = {2, 32, 4, 12, 44};
    
    printf("Digite um numero");
    for(int i = 0; i < 6; i++){
        if(i == 6){
            scanf("%d", &numsList[i]);
        }
    }

    return 0;
}