#pragma once
class Matrix
{
private:
	const int size1, size2;
	double** matrix;
public:
	Matrix(int size1, int size2);
	~Matrix();
	Matrix& operator=(const Matrix& matrixR); 
	void showMatrix();
	void updateMatrix();
};

