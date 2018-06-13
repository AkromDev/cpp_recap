#include <iostream>

using namespace std;

class Person {
    int getAge();
};

class Student: public Person {
    int age;
public:
    Student(int s){
        age = s;
    }
    int getAge(){
        return age;
    }
};

class Faculty: public Person {
    int age;
public:
    Faculty(int t){
        age = t;
    }
    int getAge(){
        return age;
    }
};

int main(){
    Student s(123);
    Faculty f(23);

    cout << "Age of Student: " << s.getAge() << endl;
    cout << "Age of Faculty: " << f.getAge() << endl;


    return 0;
}