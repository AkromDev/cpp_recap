#include <iostream>

using namespace std;

template <class T> // or template <typename T>
T maxOneType(T num1, T num2){
    return num1 > num2? num1 : num2;
}

template <class X, class Y>
X maxDifferentType(X num1, Y num2){ // returns X type, (we can put Y or any custom type if we want)
    return num1 > num2? num1 : num2;
};

template <class X, class Y>
float maxFloat(X num1, Y num2){ // returns Float type, (we can put Y or any custom type if we want)
    return num1 > num2? num1 : num2;
};

template <class Z,class X, class Y>
Z maxSpecificType(X num1, Y num2){ // returns Z type, (we can put Y or any custom type if we want)
    return num1 > num2? num1 : num2;
};

template <class X, class Y>
auto maxAutoType(X num1, Y num2) -> decltype(num1 > num2 ? num1 : num2){  //allows to extract the type from a variable (expression)

    return num1 > num2? num1 : num2; // returns auto type, (we can put Y or any custom type if we want)
};


int main(){
    int x = 10;
    int y = 20;
    float a = 10.20;
    float b = 25.4;

    cout << maxOneType(x, y) << " <- is the highest int\n";
    cout << maxOneType(a, b) << " <- is the highest float\n\n";

    cout << maxDifferentType(x, a) << " <- is the highest in different type\n";
    cout << maxDifferentType(b, y) << " <- is the highest in different type\n\n";

    cout << maxFloat(x, a) << " <- is the highest in float return\n";
    cout << maxFloat(b, y) << " <- is the highest in float return\n\n";

    cout << maxSpecificType <int>(x, a) << " <- is the highest in specific type return\n";
    cout << maxSpecificType <float>(b, y) << " <- is the highest in specific type return\n\n";

    cout << maxAutoType(y, a) << " <- is the highest in auto type return\n";
    cout << maxAutoType(b, x) << " <- is the highest in auto type return\n\n";

    decltype(x) m = 10.5; // it will be <int> type as X is int
    auto n = 10.2; // it will choose automatically

    cout << m << " <- is decltype(x) type \n";
    cout << n << " <- is auto type\n\n";
    // decltype is used to extract the data type


    return 0;
}