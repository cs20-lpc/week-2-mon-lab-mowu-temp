#include "Student.hpp"


#include <iostream>
using namespace std;
Student::Student() {
    cout << "student create" << endl;
}
void Student::setName(string s) {
    name = s;
}
void Student::setAge(int i) {
    age = i;
}

string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}
Student::~Student() {
    
}
// Student::Student() {
//     cout << "student create" << endl;
// }

// class Student {
//     private: 
//         string name;
//         int age;
    
//     public:
//          Student() {
//             cout << "student create" << endl;
//         }
//         ~Student() {
//             // delete name;
//         }
//         void setName(string s) {
//             name = s;
//         }
//         void setAge(int i) {
//             age = i;
//         }
//         string getName() const {
//             return name;
//         }
//         int getAge() const {
//             return age;
//         }

// };