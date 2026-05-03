#include <stdio.h>

int main(void){
    int nums[7];

    for(int i = 0; i < 7; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &nums[i]);
    }

    printf("-------Vetor antes da ordenação-------\n");
    for(int i = 0; i < 7; i++){
        printf("%d ", nums[i]);
    }

    int trocas = 0;
    

    // bubble sort
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7 - i - 1; j++){
            if(nums[j] > nums[j + 1]){
                //swap
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;

                //incrementa as trocas
                trocas++;
            }
        }
    }

    printf("\n-------Vetor depois da ordenação-------\n");
    for(int i = 0; i < 7; i++){
        printf("%d ", nums[i]);
    }

    printf("\nNúmero de trocas: %d\n", trocas);

    return 0;
}