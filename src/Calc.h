#pragma once

int Addition(int A, int B) {
	return A + B;
}

int Subtraction(int A, int B) {
	return A - B;
}

int Multiplication(int A, int B) {
	return A * B;
}

int Divide(int A, int B) {
	if (B == 0) {
		return A;
	}

	return A / B;
}

int Exponentation(int A, int B) {
	int tmp = 1;

	if (B < 0) {
		if (A > 1 || A < -1) {
			return 0;
		}
		else {
			if (A == 1) {
				return 1;
			}
			else {
				if (A == -1) {
					if (B % 2 == 0) {
						return 1;
					}

					return -1;
				}
				else {
					return 0;
				}
			}
		}
	}

	while (B > 0) {
		tmp *= A;
		--B;
	}

	return tmp;
}
