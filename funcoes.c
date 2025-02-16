#include <stdio.h>

// Função para somar dois números
int somar(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 10;

    // Chamando a função somar e armazenando o resultado
    int resultado = somar(num1, num2);

    // Exibindo o resultado
    printf("A soma de %d e %d é: %d\n", num1, num2, resultado);

    return 0;
}