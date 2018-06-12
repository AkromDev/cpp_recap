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
    int a = 100, b = 88, c = 8;
    int *p1 = &a, *p2, *p3 = &c;
    p2 = &b;
    p2 = p1;
    b = *p3;
    *p2 = *p3;
    cout << a << "\t"<< b << "\t" << c;
}
int cube(int *side){
    return (*side)*(*side)*(*side);
}
void thirdProblem(){
    int y = 10;
    int result = cube(&y);
    cout << "Cube of "<< y << " = " << result << endl;
}

int main(){
//   firstProblem();
//   secondProblem();
//    thirdProblem();
    return 0;

}