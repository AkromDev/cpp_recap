#include <iostream>
#include <string>

using namespace std;

class Faculty{
    int m, n;
public:
    Faculty(){};
    Faculty(int x, int y){
        m = x;
        n = y;
    };
    void get(int x, int y){
        m = x;
        n = y;
    };
    void show(){
        cout << " m = " << m << endl;
        cout << " n = " << n << endl;
    }
    int getM(){ return m; };
    int getN(){ return n; };
};

class Student{
        int a ;
        int b;
public:
    Student(){};
    Student(Faculty f){
        a= f.getM();
        b = f.getN();
    }
    void get(int x, int y){
        a = x;
        b = y;
    }

    void show(){
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main() {
    Student s;
    Faculty f;
    f.get(10,20);
    s = f;
    s.show();
    f.show();

    return 0;
}