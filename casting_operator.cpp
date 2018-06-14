#include <iostream>
#include <string>

using namespace std;

// Primitive to Class
/*
class Complex{
    int a, b;
public:
    Complex(){};
    Complex(int x){
        a = x; b = 0;
    }
    void show(){
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main(){
    Complex s1;
    int x = 5;
    s1 = x; // as if s1.Complex(5) or s1(5);
    s1.show();

    return 0;
}*/

// Class to Primitive by using 'Casting'

class Complex{
    int a, b;
public:
    void get (int x, int y){
        a = x; b = y;
    }
    void show(){
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
    operator int(){ // casting
        return a;
    };
};

int main() {
    Complex s1;
    int x;
    s1.get(10, 20); // as if s1.Complex(5) or s1(5);
    x = s1;
    cout << x << endl;

    return 0;
}