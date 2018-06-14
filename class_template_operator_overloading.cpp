#include <iostream>
#include <string>

using namespace std;

template <class T>

class Test{
    T num;
public:
    Test(){
        num = 0;
    };
    void get(){
        cin >> num;
    }
    void show(){
        cout << num << endl;
    }
    Test operator+(Test<T> c);
};


template <class T>
Test<T> Test<T>::operator+(Test<T> c) { //do not forget class template type Test<T>
    Test<T> temp;
    temp.num = this -> num + c.num;
    return temp;
}

int main(){
    Test<float> s1, s2, s3;
    s1.get();
    s2.get();
    s3 = s1 + s2;
    s3.show();

    return 0;
}