#pragma once
#include <iostream> 
#include "fft.h"
#include <Eigen/Dense>
#define PI 3.14159265359 

void test_eigen() { 
		
		Eigen::Matrix<Eigen::dcomplex, 3, 3> A;
		Eigen::Matrix<Eigen::dcomplex, 3, 3> b;
		A << 1, 2, 3, 4, 5, 6, 7, 8, 10;
		b << 3, 3, 4, 7, 3, 6, 3, 1, 3;
		std::cout << "Here is the matrix A:\n" << A << std::endl;
		std::cout << "Here is the matrix b:\n" << b << std::endl;
		Eigen::Matrix<Eigen::dcomplex, 3, 3> x = A.colPivHouseholderQr().solve(b);
		std::cout << "The solution is:\n" << x << std::endl;

}

