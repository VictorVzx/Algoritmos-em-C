#include <stdio.h>

int main(void){
    int nums[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o %dº numero: ", j+1);
            scanf("%d", &nums[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", nums[i][j]);
        }
    }
    
    return 0;
}
