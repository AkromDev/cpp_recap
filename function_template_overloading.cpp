#include <iostream>
using namespace std;


/*
 * Preference Rules:
 * 1. accurate match
 * 2. template match
 * */


template <class T> // or template <typename T>
void display(T num1){
    cout << "Template variable -> " << num1 << endl;
}
void display(int num1){
    cout << "Integer variable -> " << num1 << endl;
}

template <class T> // or template <typename T>
T sum(T x, T y){
    return x+y;
}
template <class T>
T sum(T x, T y, T z ){
    return x+y+z;
}


int main(){
    int x = 10;
    char y = 'A';
    float z = 10.20;

    display(x); // calls pure display function
    display(y);
    display(z);


    return 0;
}