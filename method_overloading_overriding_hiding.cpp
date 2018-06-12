#include <iostream>

using namespace std;
/*
 * Method Overloading - Two or more methods can have the same
 * name but the signature should be different
 * */

/*
 * Method Overriding - One method can be overriden by another one
 * */

class A{
public:
    void display(){
        cout << "I am inside A \n";
    }
    void display(int data){
        cout << "I am inside A and my value = " << data << endl;
    }
};

class B: public A {
public:
    void display(){ // method overriding
        cout << "I am inside B \n";
        A::display();
    }
};

int main(){
    B obj1;
    A obj2;
    obj1.display(); // Method overriding
    obj2.display();
    obj2.display(5); //Method overloading
    return 0;
}