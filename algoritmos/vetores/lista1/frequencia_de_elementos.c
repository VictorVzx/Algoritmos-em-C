#include <stdio.h>

int main(void){
    int nums[12];

    for(int i = 0; i < 12; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &nums[i]);

        if(nums[i] < 1 || nums[i] > 5){
            printf("[ERRO]Apenas numeros entre 1 e 5!\n");
            return 1;
        }
    }

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < nums[i]; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}