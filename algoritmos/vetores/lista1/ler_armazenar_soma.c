#include <stdio.h>

int main(void){
    int nums[10];


    // inicializa a soma como 0
    int soma = 0;
    for(int i = 0; i < 10; i++){
        printf("Digite o %dº numero: ", i + 1);
        // & para armaenar o no endereço de memoria de nums[i] (é necessario)
        scanf("%d", &nums[i]);
        // incrementa a soma (nums[1] + nums[2] + ... + nums[n])
        soma += nums[i];
    }

    printf("Soma: %d", soma);

    return 0;
}