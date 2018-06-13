#include <iostream>

using namespace std;

void ambiguityError(){
    class A {
    public:
        void display(){
            cout << "Hello from A";
        }
    };

    class B:  public A {}; // no virtual
    class C:  public A {}; // no virtual

    class D: public B, public C{}; // hybrid inheritance
    D obj;
    obj.display();
}

void virtualBaseClass(){
    class M {
    public:
        void display(){
            cout << "Hello from A";
        }
    };

    class N:  virtual public M {};  //virtual base class
    class O:  virtual public M {};  //virtual base class

    class P: public N, public O{}; // hybrid inheritance
    P obj;
    obj.display();
}


int main(){
//    ambiguityError();
    virtualBaseClass();


    return 0;
}