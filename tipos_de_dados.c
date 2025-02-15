#include <stdio.h>

int main() {

	// Declarando variC!veis de diferentes tipos

	int idade = 30; // inteiro
	float altura = 1.79; // ponto flutuante
	double peso = 65.0; // double (mais preciso que o float)
	char inicial = 'I'; // C:nico caractere (aspas simples)
	char nome[50] = "Italo"; // string (aspas duplas)
	_Bool dev = 1; // booleano (1 verdadeiro | 0 falso)

	// Exibindo valores

	printf("Nome: %s\n", nome);
	printf("Inicial: %c\n", inicial);
	printf("Idade: %d anos\n", idade);
	printf("Altura: %.2f metros\n", altura);
	printf("Peso: %.2f kg\n", peso);
	printf("Dev: %s\n", dev ? "Sim" : "Não");

	return 0;
}