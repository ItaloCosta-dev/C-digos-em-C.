#include <stdio.h>

int main() {
    // Operadores aritméticos
    int a = 10, b = 3;
    printf("Operadores aritméticos:\n");
    printf("a + b = %d\n", a + b);    // Soma
    printf("a - b = %d\n", a - b);    // Subtração
    printf("a * b = %d\n", a * b);    // Multiplicação
    printf("a / b = %d\n", a / b);    // Divisão inteira
    printf("a %% b = %d\n\n", a % b); // Módulo (resto da divisão)

    // Operadores de comparação
    printf("Operadores de comparação:\n");
    printf("a == b: %d\n", a == b);  // Igual a
    printf("a != b: %d\n", a != b);  // Diferente de
    printf("a > b: %d\n", a > b);    // Maior que
    printf("a < b: %d\n", a < b);    // Menor que
    printf("a >= b: %d\n", a >= b);  // Maior ou igual a
    printf("a <= b: %d\n\n", a <= b); // Menor ou igual a

    // Operadores lógicos
    int x = 1, y = 0;
    printf("Operadores lógicos:\n");
    printf("x && y: %d\n", x && y);  // E lógico (AND)
    printf("x || y: %d\n", x || y);  // OU lógico (OR)
    printf("!x: %d\n\n", !x);        // NÃO lógico (NOT)

    // Operadores de atribuição
    int c = 5;
    printf("Operadores de atribuição:\n");
    c += 2;  // c = c + 2
    printf("c += 2: %d\n", c);
    c -= 1;  // c = c - 1
    printf("c -= 1: %d\n", c);
    c *= 3;  // c = c * 3
    printf("c *= 3: %d\n", c);
    c /= 2;  // c = c / 2
    printf("c /= 2: %d\n", c);
    c %= 2;  // c = c % 2
    printf("c %%= 2: %d\n", c);

    return 0;
}
