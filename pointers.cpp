#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int *p;
    float *q;
    p = &x; // pointing to the value, We should point to its address
    cout << *p << endl; // to get the value put * asterisk
    return 0;
}