#include <iostream>
using namespace std;


class Base{
public:
    virtual void show(int x) = 0; // Pure Virtual function
    virtual void show(){ // Virtual function which will be bind later
        cout << "In BASE" << endl;
    }
};


class Derived: public  Base{
public:
    void show(){
        cout << "In DERIVED" << endl;
    }
};




int main(){

    Derived obj;
    Base *p;
    p = &obj;
    p -> show();

    return 0;
}