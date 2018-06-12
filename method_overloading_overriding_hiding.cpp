#include <iostream>

using namespace std;
/*
 * Method Overloading - Two or more methods can have the same
 * name but the signature should be different.
 * Method Overloading happens in the same class
 * */

/*
 * Method Overriding - One method can be overridden by another one
 * Example: down below method of A class is overridden by method of B class
 * */

/*
 * Method hiding - It is  Method overloading but it happens in multiple classes
 * */

class A{
public:
    void display(){
        cout << "I am inside A \n";
    }
    void display(int data){
        cout << "I am inside A and my value = " << data << endl;
    }
    void showNumber(int data){
        cout << data << endl;
    }
};

class B: public A {
public:
    void display(){ // method overriding
        cout << "I am inside B \n";
        A::display(); // but original inherited function still can be accessed
    }
    void showNumber(){
        cout << "No Number" << endl;
    }
};

int main(){
    B derivativeB;
    derivativeB.display(); // Method overriding
    derivativeB.showNumber(); // Method hiding

    A derivativeA;
    derivativeA.display();
    derivativeA.showNumber(5);

    return 0;
}