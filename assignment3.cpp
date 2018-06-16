#include <iostream>
using namespace std;

class Matrix{
    int **myArray; // pointer declaration to create 2D  array
    int rowLength; // tracks the row length of  the array
    int colLength; // tracks the column length of  the array
public:
    Matrix(){ // default constructor
        int row , col;
        cout << "Enter row, col: ";
        cin >> row;
        cin >> col;
        myArray = new int *[row]; // create rows
        for (int i = 0; i < row; ++i) {
            myArray[i] = new int [col]; //create columns
            for (int j = 0; j < col; ++j) {
                myArray[i][j] = 0; // by default  assign all values = 0;
            }
        }
        // saves row and column length to private members
        rowLength = row;
        colLength = col;
    }
    Matrix(int row, int col){ // Constructor with row and col parameters
        myArray = new int *[row]; // create rows
        for (int i = 0; i < row; ++i) {
            myArray[i] = new int [col]; //create columns
            for (int j = 0; j < col; ++j) {
                myArray[i][j] = 0; // by default  assign all values = 0;
            }
        }
        // saves row and column length to private members
        rowLength = row;
        colLength = col;
    }
    void getData(){ // function to get data from user
        for (int i = 0; i <rowLength ; ++i) {
            for (int j = 0; j < colLength; ++j) {
                cin >> myArray[i][j];
            }
        }
    }
    void show(){ // function to display all values
        for (int i = 0; i <rowLength ; ++i) {
            for (int j = 0; j < colLength; ++j) {
                cout  << myArray[i][j] << " ";
            }
            cout << endl; // to print the values in matrix format
        }
    }

    /*
     * @checkMatrices - receives 2 objects and checks whether obj1.rowLength == obj2.colLength
     * and returns Boolean value;
     * */

    bool checkMatrices(Matrix &obj1, Matrix &obj2){
        return obj1.colLength == obj2.rowLength;
    }

    Matrix mul(Matrix &guestObj){ // function to multiply 2 Matrices
        // @this - refers to current operating object (hostObj)
        try {

            bool areMatricesValid = checkMatrices(*this, guestObj); // check Matrices
            if(!areMatricesValid){ // if areMatricesValid is  false, throw error about Matrices row-column inequality
                throw false;
            } else {
                // Create an object with passed col and row length, to store the product of 2 arrays multiplication
                Matrix product(this -> rowLength, guestObj.colLength);

                for (int i = 0; i < this -> rowLength; ++i) { // loop for hostObj -> row
                    for (int j = 0; j < this -> colLength; ++j) { // loop for hostObj -> column
                        for (int k = 0; k < guestObj.colLength; ++k) { // loop for guestObj -> column

                            // multiplies hostObj value with guestObj value, and stores into product 2-d array
                            product.myArray[i][k] += ((this->myArray[i][j]) * (guestObj.myArray[j][k]));
                        }
                    }
                }
                return product;
            }

        } catch (bool areMatricesValid){ // catch error about Matrices row-column inequality
            if(!areMatricesValid){
                cout << "--------First Matrix col and Second Matrix row should be equal, please check!-------" << endl;
            }
        }
    }

    ~Matrix(){ // destrcutor
        for (int i = 0; i < rowLength ; ++i) {
            delete myArray[i]; // delete each column;
        }
        delete [] myArray; // delete whole array(columns)
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