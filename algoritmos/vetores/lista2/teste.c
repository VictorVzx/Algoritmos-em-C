#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int *arr = malloc(3 * sizeof(int));

    int arrayLen = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < 3; i++){
        arr[i] = i + 1;
    }

    for(int i = 0; i < arrayLen; i++) printf("%d\n", arr[i]);

    int newLen;
    
    printf("Digite o novo tamanho do array: ");
    scanf("%d", &newLen);

    arr = realloc(arr, newLen * sizeof(int));

    for(int i = 0; i < newLen; i++){
        printf("Digite o %dº numero do array: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < newLen; i++) printf("%d\n", arr[i]);

    return 0;
}