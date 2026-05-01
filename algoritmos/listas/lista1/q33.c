#include <stdio.h>

int main(void){
    int qtd = 0;
    float notas, totalEscola = 0, mediaEscola;

    int somaNotas;
    
    int qtdNotas = 0;
    for(int i = 1; i <= 15; i++){
        printf("Digite a quantidade de alunos para a turma %d: ", i);
        scanf("%d", &qtd);

        somaNotas = 0;

        for(int j = 1; j <= qtd; j++){
            printf("Digite a nota do %dº aluno da turma %d: ", j, i);
            scanf("%d", &notas);
            if(notas > 7){
                somaNotas++;
            }
            qtdNotas += notas;

        }
        totalEscola = qtdNotas;
        mediaEscola = totalEscola / qtd;
    }

    printf("Média: %d\n", mediaEscola);
    printf("Quantidade de alunos com nota maior do que 7: %d", somaNotas);

    return 0;
}