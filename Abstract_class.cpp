#include <iostream>

using namespace std;
/* Abstract class: - A class containing at least one pure virtual
 * function/abstract function is an abstract class
 * - Instance/Object of abstract class cannot be made
 * - Only objects of its subclass (if they are not abstract) can be made
 * - Subclasses of an abstract base class must define the abstract method,
 *   otherwise, they will also become abstract classes.
 * - In an abstract class, we can also have other functions and variables apart
 *   from pure virtual function.
 * */
class Person { // Abstract class
    virtual int getAge(int x) = 0;
};

class Student: public Person {
    int age;
public:
    Student(int s){
        age = s;
    }
    int getAge(int x){
        return age;
    }
};

class Faculty: public Person {
    int age;
public:
    Faculty(int t){
        age = t;
    }
    int getAge(int a){
        return age;
    }
};

int main(){
    // as long as we create an instance,
    // we have to include abstract method inside derived class too
    Student s(123);
    Faculty f(23);

    cout << "Age of Student: " << s.getAge(5) << endl;
    cout << "Age of Faculty: " << f.getAge(6) << endl;


    return 0;
}