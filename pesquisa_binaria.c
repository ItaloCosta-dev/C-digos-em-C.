#include <stdio.h>

int main() {
    int numeros[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    
    int chave = 90;
    int inicio = 0, fim = tamanho - 1, meio;
    int encontrado = 0;
    
    // Pesquisa binária
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        
        if (numeros[meio] == chave) {
            printf("Elemento %d encontrado na posição %d\n", chave, meio);
            encontrado = 1;
            break;
        } else if (numeros[meio] < chave) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    // Mensagem caso o elemento não seja encontrado
    if (!encontrado) {
        printf("Elemento %d não encontrado.\n", chave);
    }

    return 0;
}

