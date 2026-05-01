#include <stdio.h>

int main(void){
    // fetuccine
    int anterior, sucessor, atual;

    printf("Digite o numero anterior: ");
    scanf("%d", &anterior);
    printf("Digite o sucessor: ");
    scanf("%d", &sucessor);

    for(int i = 1; i < 20; i++){
        if(anterior % 2 == 0 || sucessor % 2 == 0){
            atual = anterior + sucessor;
            anterior = sucessor;
            sucessor = atual;
            printf("%d\n", atual);
        } else {
            atual = anterior - sucessor;
            anterior = sucessor;
            sucessor = atual;
            printf("%d\n", atual);
        }
    }

    return 0;
}