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
    virtual string getFirstName(string first_name) = 0;
    virtual string getLastName(string last_name) = 0;
    virtual string getEmail(string email) = 0;
};

class Student: public Person {
    string first_name;
    string last_name;
    string email;
public:
    Student(string first_name, string last_name, string email){
        this -> first_name = first_name;
        this -> last_name = last_name;
        this -> email;
    }
    string getAge(string first_name){ // should be same with base class abstract method
        return first_name;
    }
    string getAge(string last_name){ // should be same with base class abstract method
        return last_name;
    }
    string getAge(string email){ // should be same with base class abstract method
        return email;
    }
};

class Faculty: public Person {
    string first_name;
    string last_name;
    string email;
public:
    Faculty(int t){
        age = t;
    }
    string getAge(string first_name){ // should be same with base class abstract method
        return first_name;
    }
    string getAge(string last_name){ // should be same with base class abstract method
        return last_name;
    }
    string getAge(string email){ // should be same with base class abstract method
        return email;
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