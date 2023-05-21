#include <stdio.h>

void start() {
	printf("Bem-vindo!\n");
}

int operation() {
	int n1, n2, op, resultado;
	
	printf("Digite o primeiro numero:");
	scanf("%i", &n1);
	printf("Digite o segundo numero:");
	scanf("%i", &n2);
	
	printf("Escolha a operacao: 1 - Soma | 2 - Subtracao | 3 - Multiplicacao | 4 - Divisao\n");
	scanf("%i", &op);

	switch(op){
		case 1:
		resultado = n1 + n2;
		printf("Resultado = %i", resultado);
		break;
	case 2:
		resultado = n1 - n2;
		printf("Resultado = %i", resultado);
		break;
	case 3:
		resultado = n1 * n2;
		printf("Resultado = %i", resultado);
		break;
	case 4:
		resultado = n1 / n2;
		printf("Resultado = %i", resultado);
		break;
	default:
		printf("Erro\n");
		break;
	}
}

void chance(){
	char resposta;
	printf("Quer tentar novamente? S/n\n");
		scanf("%c", &resposta);
		switch(resposta){
			case 'S' || 's':
				operation();
				break;
				system('cls');

			default:
				printf("Até logo!");
				break;
		}
}

main() {
	start();
	operation();
	chance();
}