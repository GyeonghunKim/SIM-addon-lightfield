#pragma once
#include "fft.h"
void test_fft() {
	int n1 = 4;
	int n2 = 4;

	complex* in = (complex*)malloc(sizeof(complex) * n1 * n2);
	// complex* out = (complex*)malloc(sizeof(complex) * n1 * n2);

	for (int i = 0; i < n1; ++i) {
		for (int j = 0; j < n2; ++j) {
			in[i * n2 + j] = { (real)(i + 2 * j),0 };
		}
	}

	for (int i = 0; i < n1; ++i) {
		for (int j = 0; j < n2; ++j) {
			std::cout << in[i * n2 + j].Re << "\t" << in[i * n2 + j].Im << ", \t";
		}
		std::cout << "\n";
	}
	fftshift2D(in, n1, n2);
	fft2D(in, n1, n2, 1);
	fftshift2D(in, n1, n2);
	std::cout << "*************************************\n\n" << std::endl;
	for (int i = 0; i < n1; ++i) {
		for (int j = 0; j < n2; ++j) {
			std::cout << in[i * n2 + j].Re << "\t" << in[i * n2 + j].Im << ", \t";
		}
		std::cout << "\n";
	}
	std::cout << "*************************************\n\n" << std::endl;
	circshift2D(in, n1, n2, 3, 1);
	for (int i = 0; i < n1; ++i) {
		for (int j = 0; j < n2; ++j) {
			std::cout << in[i * n2 + j].Re << "\t" << in[i * n2 + j].Im << ", \t";
		}
		std::cout << "\n";
	}
	free(in);
}