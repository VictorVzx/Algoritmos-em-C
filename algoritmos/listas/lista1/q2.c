#include <stdio.h>

int main(void){
    int anterior = 0,
    sucessor = 1,
    atual;

    int fibonnaci = 0;
    for(int i = 0; i <= 10; i++){
        printf("%d\n", atual);
        atual = anterior + sucessor;
        anterior = sucessor;
        sucessor = atual;
    }



    return 0;
}