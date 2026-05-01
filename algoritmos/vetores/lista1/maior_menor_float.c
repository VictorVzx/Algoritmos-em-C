#include <stdio.h>

int main(void){
    float nums[8];

    float maior = nums[0];
    float menor = nums[0];
    for(int i = 0; i < 8; i++){
        printf("Digite o %dº numero do vetor: ", i + 1);
        scanf("%f", &nums[i]);

        if(i == 0){
            maior = nums[i];
            menor = nums[i];
        }

        if(nums [i] > maior){
            maior = nums[i];
        }else{
            menor = nums[i];
        }
    }

    printf("Maior: %.2f\nMenor: %.2f\n", maior, menor);

    return 0;
}