#include <stdio.h>

int main() {
    int numeros[] = {10,20,30,40,50};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    
    int chave = 50;
    int encontrado = 0;
    
    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] == chave) {
            printf("elemento %d encontrado na posição %d\n", chave, i);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Elemento %d não encontrado.\n", chave);
    }
    return 0;
}