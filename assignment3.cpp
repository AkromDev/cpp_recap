#include <iostream>
#include <array>

using namespace std;

class Matrix{
    int **myArray;
    int rowLength;
    int colLength;
public:
    Matrix(){
        int row , col;
        cout << "Enter row, col: ";
        cin >> row;
        cin >> col;
        myArray = new int *[row];
        for (int i = 0; i < row; ++i) {
            myArray[i] = new int [col];
        }
        rowLength = row;
        colLength = col;
    }
    Matrix(int row, int col){
        myArray = new int *[row];
        for (int i = 0; i < row; ++i) {
            myArray[i] = new int [col];
            for (int j = 0; j < col; ++j) {
                myArray[i][j] = 0;
            }
        }
        rowLength = row;
        colLength = col;
    }
    void getData(){
        for (int i = 0; i <rowLength ; ++i) {
            for (int j = 0; j < colLength; ++j) {
                cin >> myArray[i][j];
            }
        }
    }
    void show(){
        for (int i = 0; i <rowLength ; ++i) {
            for (int j = 0; j < colLength; ++j) {
                cout  << myArray[i][j] << " ";
            }
            cout << endl;
        }
    }

    bool checkMatrices(Matrix &obj1, Matrix &obj2){
        return obj1.colLength == obj2.rowLength;
    }

    Matrix mul(Matrix &guestObj){
        try {
            bool areMatricesValid = checkMatrices(*this, guestObj);
            if(!areMatricesValid){
                throw false;
            } else {
                Matrix product(this -> rowLength, guestObj.colLength);

                for (int i = 0; i < this -> rowLength; ++i) {
                    for (int j = 0; j < this -> colLength; ++j) {
                        for (int k = 0; k < guestObj.colLength; ++k) {
                            product.myArray[i][k] += ((this->myArray[i][j]) * (guestObj.myArray[j][k]));
                        }
                    }
                }
                return product;
            }
        } catch (bool areMatricesValid){
            if(!areMatricesValid){
                cout << "--------First Matrix col and Second Matrix row should be equal, please check!-------" << endl;
            }
        }
    }

    ~Matrix(){
        for (int i = 0; i < rowLength ; ++i) {
            delete myArray[i];
        }
        delete [] myArray;
    }
};

int main(){
    Matrix m1;
    m1.getData();
    Matrix m2;
    m2.getData();
    Matrix m3 = m1.mul(m2);
    m3.show();
    return 0;
}