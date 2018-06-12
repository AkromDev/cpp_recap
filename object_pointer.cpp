#include <iostream>
using namespace std;
class Box {
    int l, b, h;
public:
    void setDimension(int x, int y, int z){
        l = x;
        b = y;
        h = z;
    }
    void showDimension(){
        cout << "l = "<< l << "\t";
        cout << "b = "<< b << "\t";
        cout << "h = "<< h << "\t";
    }
};
int main(){
    Box *p, box1; // Object pointer
    p = &box1; // object pointer assigning

    p -> setDimension(1,2,3);
    p -> showDimension();
    cout << "\n";
    box1.setDimension(4,5,6);
    box1.showDimension();
    return 0;
}