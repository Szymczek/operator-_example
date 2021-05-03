#include <iostream>
using namespace std;
#include "Matrix.h"


int main()
{
    int size1, size2;
    cout << "Matrix" << endl;
    cout << "Wprowadz rozmiar macierzy: " << endl;
    cin >> size1;
    cin >> size2; 
    Matrix matrix1(size1, size2);
    matrix1.showMatrix();

}

 