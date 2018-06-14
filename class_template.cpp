#include <iostream>

using namespace std;

template <class T, class S>

class Student{
    S name;
    T age;
public:
    void setAge(T value);
    void setName(T value);
    T getAge();
    T getName();
    void displayProfile();
};

template <class T, class S>
void Student<T,S>::setAge(T value) {
    age = value;
}

template <class T, class S>
void Student<T,S>::setName(T value) {
    name = value;
}

template <class T>
void Student<T>::setAge(T value) {
    age = value;
}

int main(){
    int x = 10;
    int y = 20;
    float a = 10.20;
    float b = 25.4;


    return 0;
}