#include <iostream>

using namespace std;


class Complex {
private:
    int var1;
    int var2;
public:
    Complex(){
        var1 = 0;
        var2 = 0;
    }
    void setData(int x, int y);
    void showData();
    Complex operator+(Complex obj);
    Complex operator--(Complex obj);
    operator float(){ // conversion  overloading float -> int
        return float(var1) / float(var2);
    }
};

void Complex::setData(int x, int y) {
    var1 = x;
    var2 = y;
}
void Complex::showData() {
    cout << var1 << ", " << var2 << endl;
}
Complex Complex::operator+(Complex obj) {
    Complex temp;
    temp.var1 = var1 + obj.var1;
    temp.var2 = var2 + obj.var2;
    return temp;
}
Complex Complex::operator--(Complex obj) {
    Complex temp;
    temp.var1 = var1 + obj.var1;
    temp.var2 = var2 + obj.var2;
    return temp;
}

int main(){
    Complex obj1, obj2, obj3;
    obj1.setData(5,2);
    obj2.setData(4,5);
    obj3 = obj1 + obj2;
    obj3.showData();
}