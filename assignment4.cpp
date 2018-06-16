#include <iostream>

using namespace std;
class Person { // Person Abstract class
protected: // protected value
    string first_name;
    string last_name;
    string email;
public:
    virtual void getFirstName() = 0;
    virtual void getLastName() = 0;
    virtual void getEmail() = 0;
};

class Student: public Person { // derived class from Person class
private:
    float GPA;
    string courseTaken;
public:
    void getFirstName(){
        cout << "Enter First Name: ";
        cin >> this -> first_name;
    }
    void getLastName(){
        cout << "Enter Last Name: ";
        cin >> this -> last_name;
    }
    void getEmail(){
        cout << "Enter Email: ";
        cin >> this -> email;
    }
    void getGpa(){
        cout << "Enter your GPA: ";
        cin >> this -> GPA;
    }
    void getCourseTaken(){
        cout << "Enter one course name taken: ";
        cin >> this -> courseTaken;
    }
    void display(){
        cout << endl;
        cout << "First Name: " << first_name << endl;
        cout << "Last Name: " << last_name << endl;
        cout << "Email: " << email << endl;
        cout << "GPA: " << GPA << endl;
        cout << "Course Taken: " << courseTaken << endl;

    }
};

class Faculty: public Person { // derived class from Person class
private:
    string courseOffered;
    int salary;
public:
    void getFirstName(){
        cout << "Enter First Name: ";
        cin >> this -> first_name;
    }
    void getLastName(){
        cout << "Enter Last Name: ";
        cin >> this -> last_name;
    }
    void getEmail(){
        cout << "Enter Email: ";
        cin >> this -> email;
    }
    void getSalary(){
        cout << "Enter Salary: ";
        cin >> this -> salary;
    }
    void getCourseOffered(){
        cout << "Enter one course offered: ";
        cin >> this -> courseOffered;
    }
    void display(){
        cout << endl;
        cout << "First Name: " << first_name << endl;
        cout << "Last Name: " << last_name << endl;
        cout << "Email: " << email << endl;
        cout << "Salary: " << salary << endl;
        cout << "Course Offered: " << courseOffered << endl;
    }

};

int main(){
    int opCode;
    cout << "Menu" << endl;
    cout << "1. Student \n2. Faculty" << endl;
    cout << "Enter a number(1-2): ";
    cin >> opCode; // operation code entered from user (1 or 2)
    if(opCode == 1){
        Student s;
        s.getFirstName();
        s.getLastName();
        s.getEmail();
        s.getGpa();
        s.getCourseTaken();
        s.display();
    }else if(opCode == 2){
        Faculty f;
        f.getFirstName();
        f.getLastName();
        f.getEmail();
        f.getSalary();
        f.getCourseOffered();
        f.display();
    }else{
        cout << "Wrong operation!";
        return 0;
    }

}