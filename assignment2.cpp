#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
class Vector { //generic Vector class
    vector<T> *myVec; // default pointer vector initialization

public:
    void createVector(){ //creates a new vector
        myVec = new vector<T>;
    }
    void sortVector(){
        sort(myVec -> begin(), myVec -> end()); // sort the vector in ascending order
    }

    void displayVector(){
        vector<int>::iterator itr; // iterator declaration

        for(itr = myVec -> begin(); itr != myVec -> end(); ++itr) { // displaying each value
            cout << *itr << "\t";
        }
        cout << endl;
    }
    void insertValue(T value){ // pushes values into the vector
        myVec -> push_back(value);
    }
};


int main(){
    Vector<int> obj1;
    obj1.createVector(); // creates vector
    obj1.insertValue(5); // pushes value
    obj1.insertValue(2);
    obj1.insertValue(3);
    obj1.insertValue(4);
    obj1.displayVector(); // displays all values
    obj1.sortVector(); //sort in ascending order
    obj1.displayVector(); // displays all values

    return 0;
}