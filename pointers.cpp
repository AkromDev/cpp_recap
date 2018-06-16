#include <iostream>
using namespace std;

void firstProblem(){
    int x = 10;
    int *p;
    int *q;
    p = &x; // pointing to the value, We should point to its address
    q = p; // assigning to Pointer Type Vars
    cout << *q << endl; // to get the value put * asterisk
}
void secondProblem(){
    int a = 100;
    int *p1 = &a;

    cout << &p1 << "\t";
}


int main(){
//   firstProblem();
   secondProblem();
//    thirdProblem();
    return 0;

}