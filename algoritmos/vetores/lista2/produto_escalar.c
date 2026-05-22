    #include <stdio.h>

    int main(void){
        int vetor1[5], vetor2[5];

        for(int i = 0; i < 5; i++){
            printf("Digite o %dº elemento do vetor1: ", i+1);
            scanf("%d", &vetor1[i]);
        }
        for(int i = 0; i < 5; i++){
            printf("Digite o %dº elemento do vetor2: ", i+1);
            scanf("%d", &vetor2[i]);
        }

        int produtoEscalar = 0;

        for(int i = 0; i < 5; i++){
            produtoEscalar += vetor1[i] * vetor2[i];
        }

        printf("Produto escalar: %d", produtoEscalar);

        return 0;
    }