#include <iostream>

using namespace std;


/*
 * Base class pointer - can point to the object of any of its descendant class
 * But its converse is not true
 * */

class A{
public:
    void display(){
        cout << "I am inside A \n";
    }
};

class B: public A {
public:
    void display() { // method overriding
        cout << "I am inside B \n";
    }
};

int main(){
    A derivativeA, *ptr; // object and a pointer of class
    B derivativeB; // an object from B class
    ptr = &derivativeB; // a pointer by A is being assigned to 'derivativeA';


    ptr -> display(); // as ptr is a pointer from A, its methods are from A, not from B even though after assigning
    derivativeB.display();

    return 0;
}