#include <iostream>
using namespace std;
class Box {
    int l, b, h;
public:
    /*
     * We can use same variable name by using 'this'
     * Down below, as you can see we are getting 'l' value
     * and assigning it to 'l' variable of an Object
     * */
    void setDimension(int l, int b, int h){
        this -> l = l; // this means, current object
        this -> b = b;
        this -> h = h;
    }
    void showDimension(){
        cout << "l = "<< l << "\t";
        cout << "b = "<< b << "\t";
        cout << "h = "<< h << "\t";
    }
};
int main(){
    Box box1; // Object pointer
    box1.setDimension(4,5,6);
    box1.showDimension();
    return 0;
}