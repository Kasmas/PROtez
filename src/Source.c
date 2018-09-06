#include <stdio.h>
#include <stdlib.h>

#include "Calc.h"

int main() {
	int accumulator = 0, second_operand;
	char key;
	int a;
	
	do {
		system("CLS");

		printf("%d\n", accumulator);

		printf("Select operation\n");
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Divide\n");
		printf("5. Exponentation\n");
		printf("ESC. Exit\n");

		key = scanf("%d", &a);

		switch (key) {
		case '1':
			printf("Enter addend: ");
			scanf("%d", &second_operand);
			accumulator = Addition(accumulator, second_operand);
			break;
		case '2':
			printf("Enter subtractor: ");
			scanf("%d", &second_operand);
			accumulator = Subtraction(accumulator, second_operand);
			break;
		case '3':
			printf("Enter multiplier: ");
			scanf("%d", &second_operand);
			accumulator = Multiplication(accumulator, second_operand);
			break;
		case '4':
			printf("Enter divide: ");
			scanf("%d", &second_operand);
			accumulator = Divide(accumulator, second_operand);
			break;
		case '5':
			printf("Enter exponent: ");
			scanf("%d", &second_operand);
			accumulator = Exponentation(accumulator, second_operand);
			break;
		}
		
	} while (key != 27);

	return 0;
}
