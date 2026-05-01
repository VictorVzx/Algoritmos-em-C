#include <stdio.h>

int main(void){
    float notas[5];

    for(int i = 0; i < 5; i++){
        printf("Digite a nota do %dº aluno: ", i + 1);
        scanf("%f", &notas[i]);
    }

    float media, somatorio = 0;
    for(int i = 0; i < 5; i++){
        somatorio += notas[i];
        media = somatorio / 5;
    }

    printf("Média da turma: %.2f\n", media);

    for(int i = 0; i < 5; i++){
        if(notas[i] >= 7){
            printf("Aluno %d: %.2f -> aprovado!\n", i + 1, notas[i]);
        }else if(notas[i] >= 4){
            printf("Aluno %d: %.2f -> de prova final\n", i + 1, notas[i]);
        }else{
            printf("Aluno %d: %.2f -> reprovado!\n", i + 1, notas[i]);
        }
    }

    return 0;
}