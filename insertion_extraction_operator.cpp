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
    friend ostream& operator<<(ostream &dout, Complex obj);
};

ostream& operator<<(ostream &dout, Complex &obj){
    dout << obj.var1 << "+i" << obj.var2;
    return dout;
}

void Complex::setData(int x, int y) {
    var1 = x;
    var2 = y;
}
void Complex::showData() {
    cout << var1 << ", " << var2 << endl;
}

int main(){
    Complex obj1, obj2, obj3;
    obj1.setData(2,3);
//    obj2.setData(4,5);
//    obj3 = obj1 + obj2;
    cout << obj1;
}