#include <iostream>

using namespace std;

template <class T> // or template <typename T>
T maxm(T num1, T num2){
    return num1 > num2? num1 : num2;
}



int main(){
    int x = 10;
    int y = 20;
    float a = 10.20;
    float b = 25.4;
    cout << maxm(x, y) << " <- is the highest int" << endl;
    cout << maxm(a, b) << " <- is the highest float" << endl;


    return 0;
}