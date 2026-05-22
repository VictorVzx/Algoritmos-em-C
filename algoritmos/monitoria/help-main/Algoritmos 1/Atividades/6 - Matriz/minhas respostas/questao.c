#include <stdio.h>

int main(void){
    float matriz[4][4], media, somatorio = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite a %dª media da %dª coluna: ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            somatorio += matriz[i][j];
        }
    }

    media = somatorio / 16;

    printf("Média: %.1f", media);

    return 0;
}