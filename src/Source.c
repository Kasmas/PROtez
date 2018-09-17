#include <stdio.h>
#include <stdlib.h>

#include "Calc.h"

int main() {
	int second_operand, accumulator = 0;
	char key;

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

		key = getch(NULL);

		switch (key) {
		case '1':
			printf("Enter addend: ");
			scanf_s("%d", &second_operand);
			accumulator = addition(accumulator, second_operand);
			break;
		case '2':
			printf("Enter subtractor: ");
			scanf_s("%d", &second_operand);
			accumulator = subtraction(accumulator, second_operand);
			break;
		case '3':
			printf("Enter multiplier: ");
			scanf_s("%d", &second_operand);
			accumulator = multiplication(accumulator, second_operand);
			break;
		case '4':
			printf("Enter divide: ");
			scanf_s("%d", &second_operand);
			y = divide(accumulator, second_operand);
			break;
		case '5':
			printf("Enter exponent: ");
			scanf_s("%d", &second_operand);
			accumulator = exponentation(accumulator, second_operand);
			break;
		}

	} while (key != 27);

	return 0;
}
