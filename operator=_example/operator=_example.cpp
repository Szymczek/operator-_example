#include <iostream>
using namespace std;
#include "Matrix.h"


int main()
{
    int size1, size2;
    cout << "Matrix" << endl;
    cout << "Wprowadz rozmiar macierzy 1: " << endl;
    cin >> size1;
    Matrix matrix1(size1, size1);
    cout << "Wprowadz rozmiar macierzy 2: " << endl;
    cin >> size2;
    Matrix matrix2(size2, size2);
    cout << "Matrix1" << endl;
    matrix1.showMatrix();
    cout << "Matrix2" << endl;
    matrix2.showMatrix();
    matrix1 = matrix2;
    cout << "Matrix1 after" << endl;
    matrix1.showMatrix();
    cout << "Matrix2 after" << endl;
    matrix2.showMatrix();

}

 