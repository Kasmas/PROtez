#pragma once

int addition(int A, int B) {
	return A + B;
}

int subtraction(int A, int B) {
	return A - B;
}

int multiplication(int A, int B) {
	return A * B;
}

int divide(int A, int B) {
	if (B == 0) {
		return A;
	}

	return A / B;
}
