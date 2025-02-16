#include <stdio.h>

int main() {
    int numero;

    // Entrada do usuário
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Verificação condicional
    if (numero > 0) {
        printf("O número é positivo.\n");
    } else if (numero < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é zero.\n");
    }

    return 0;
}