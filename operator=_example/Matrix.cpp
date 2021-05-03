#include "Matrix.h"
#include <iostream>

Matrix:: Matrix(int size1, int size2) : size1(size1), size2(size1){

	// Creating memory
	matrix = new double* [size1];
	for (int i = 0; i < size1; ++i) {
		matrix[i] = new double[size2];
	}

	// Data input
	for (int i = 0; i < size1; ++i) {
		std::cout << "Add data" << std::endl;
		for (int j = 0; j < size2; ++j) {
			std::cin >> matrix[i][j];
		}
	}

}

Matrix::~Matrix()
{
	for (int i = 0; i < size1; ++i) {
		delete[] matrix[i];
	}
	delete[] matrix;
}

Matrix& Matrix::operator=(const Matrix& matrixR)
{
	if (this == &matrixR) {
		return *this;
	}
	for (int i = 0; i < size1; ++i) {
		for (int j = 0; j < size2; ++j) {
			this->matrix[i][j] = matrixR.matrix[i][j];
		}
	}
	return *this;
}

void Matrix::showMatrix()
{
	for (int i = 0; i < size1; ++i) {
		for (int j = 0; j < size2; ++j) {
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << "\n";
	}
}

void Matrix::updateMatrix()
{
	std::cout << "Add new data: " << std::endl;
	for (int i = 0; i < size1; ++i) {
		for (int j = 0; j < size2; ++j) {
			std::cin >> matrix[i][j];
		}
	}

}


 