#include "Student.hpp"


#include <iostream>
using namespace std;
Student::Student() {
    cout << "Student object created!" << endl;
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
