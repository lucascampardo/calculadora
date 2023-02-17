#include <stdio.h>

int main() {
	start();
	operation();
	return 0;
}

int start() {
	printf("Welcome!\n");
}

int operation() {
	int n1, n2, op, result;
	
	printf("Type the first number:");
	scanf("%i", &n1);
	printf("Type the second number:");
	scanf("%i", &n2);
	
	printf("Choose the operation: 1 - Sum | 2 - Sub | 3 - Mult | 4 - Div\n");
	scanf("%i", &op);
	
	if (op == 1) {
		result = n1 + n2;
		printf("The result is: %i", result);
	} else if (op == 2) {
		result = n1 - n2;
		printf("The result is: %i", result);
	} else if (op == 3) {
		result = n1 * n2;
		printf("The result is: %i", result);
	} else if (op == 4) {
		result = n1 / n2;
		printf("The result is: %i", result);
	} else {
		printf("Error");
	}
}
