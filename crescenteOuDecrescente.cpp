#include <stdio.h>

/*
Leia uam quantidade  indeterminada de duplas de valores inteiros X e Y.
Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados
em ordem crescente ou decrescente.
O programa deve finalizar quando forem digitados dois valores iguais.
*/

int main() {

//solcita os numeros e ler
	int x, y;
	printf("Digite dois numeros:\n");
	scanf("%d", &x);
	scanf("%d", &y);

//enquanto x diferente de y
	while ( x != y) {
		
		//condicional para crescente ou decrescente
		if (x < y) {
			printf("CRESCENTE\n");
		} else {
			printf("DECRESCENTE\n");
		}

		//Novos valores para analise do loop. Não pode esquecer para não gerar loop infinito.
		printf("Digite outros dois numeros:\n");
		scanf("%d", &x);
		scanf("%d", &y);
	}
		printf("NUMEROS IGUAIS");
	return 0;
}