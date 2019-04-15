#include <iostream>

#include "fft.h"
#include "fft_test.h"
#include "EigenTest.h"

int main(void) {
	test_fft();
	std::cout << "*****************************************************" << std::endl;
	test_eigen();
	return 0;
} 
