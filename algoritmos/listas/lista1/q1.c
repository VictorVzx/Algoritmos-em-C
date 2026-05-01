#include <stdio.h>

int main(void){
    int n;
    do{
        printf("Digite um numero positivo: (-1 para sair)");
        scanf("%d", &n);

        if(n == -1){
            printf("Encerrando...\n");
            return 1;
        } else if(n < 0){
            printf("Apenas positivos!\n");
        }

        if(n % 2 == 0){
            printf("Par!\n");
        } else {
            printf("Ímpar!\n");
        }


    } while(n != -1);

    return 0;
}