#include <stdio.h>

int main(void){
    int nums[7], pares = 0;;
    for(int i = 0; i < 7; i++){
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &nums[i]);
    }
    for(int i = 0; i < 7; i++){
        if(nums[i] % 2 == 0){
            pares++;
            printf("%d ", nums[i]);
        }
    }
    if(pares == 0){
        printf("Nenhum número par encontrado!\n");
    }
    
    return 0;
}