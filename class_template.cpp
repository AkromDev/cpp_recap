#include <iostream>
#include <string>

using namespace std;

template <class T, class S>

class Student{
    S name;
    T age;

    T getAge();
    S getName();
public:
    Student(T age, S name);
    void setAge(T value);
    void setName(S value);

    void displayProfile();
};
template <class T, class S>
Student<T,S>::Student(T age, S name) {
    this -> name = name;
    this -> age = age;
}
template <class T, class S>
void Student<T,S>::setAge(T value) {
    age = value;
}

template <class T, class S>
void Student<T,S>::setName(S value) {
    name = value;
}

template <class T, class S>
T Student<T,S>::getAge() {
    return age;
}
template <class T, class S>
S Student<T,S>::getName() {
    return name;
}
template <class T, class S>
void Student<T,S>::displayProfile() {
    cout << "Name: " << getName() << endl;
    cout << "Age: " << getAge() << endl;
}
int main(){
    Student<int, string> s1(0, "unknown");
    s1.setAge(22);
    s1.setName("Akrom");

    s1.displayProfile();

    return 0;
}