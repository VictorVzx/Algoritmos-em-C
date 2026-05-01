#include <stdio.h>

int main(void){
    int nums[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &nums[i]);
    }

    int value;

    printf("Digite o valor que você quer buscar: ");
    scanf("%d", &value);

    int achou = 0;

    for(int i = 0; i < 10; i++){
        if(value == nums[i]){
            achou = 1;
        }else{
            achou = 0;
        }

        if(achou == 1){
            printf("%d achado em: %d\n", value, i);
        }
    }
    if(achou == 0){
        printf("Não foi possivel encontrar o valor %d\n", value);
    }

    return 0;
}