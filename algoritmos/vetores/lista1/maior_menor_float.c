#include <stdio.h>

int main(void){
    float nums[8];

    float maior = nums[0];
    float menor = nums[0];

    int pos1, pos2;
    for(int i = 0; i < 8; i++){
        printf("Digite o %dº numero do vetor: ", i + 1);
        scanf("%f", &nums[i]);

        if(i == 0){
            maior = nums[i];
            menor = nums[i];
        }

        if(nums[i] > maior){
            maior = nums[i];
            pos1 = i + 1;
        }else if(nums[i] == 0 || nums[i] < menor){
            menor = nums[i];
            pos2 = i + 1;
        }
    }

    printf("Maior: %.2f (Posição: %d)\nMenor: %.2f (Posição: %d)\n", maior, pos1, menor, pos2);

    return 0;
}