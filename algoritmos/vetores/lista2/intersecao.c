#include <stdio.h>

int main(void){
    int vet1[10], vet2[10];
    printf("Primeiro vetor\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vet1[i]);
    }
    printf("Segundo vetor\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vet2[i]);
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(vet1[i] == vet2[j]){
                printf("Numero %d encontrado nos dois vetores!\n", vet1[i]);
                break;
            }
        }
    }
    

    return 0;
}