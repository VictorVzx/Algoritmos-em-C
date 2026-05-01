#include <stdio.h>

int main(void){
    int nums[6];

    for(int i = 0; i < 6; i++){
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &nums[i]);
    }


    // otimização: N/2-1 (nums[N - 1 - i])
    for(int i = 0; i < 6/2-1; i++){
        int temp = nums[i];
        nums[i] = nums[6 - 1 - i];
        nums[6 - 1 - i] = temp;
    }

    for(int i = 0; i < 6; i++){
        printf("Posição[%d]: %d\n", i, nums[i]);
    }

    return 0;
}