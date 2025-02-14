#include "student.h"

Student::Student():Name("NULL"), Age(0) {}

Student::Student(string name, int age):Name(name),Age(age){
    cout << "Opiskelija luotu."<< endl;
}

void Student::setAge(int age){
    this->Age=age;
}

void Student::setName(string name){
    this->Name=name;
}

string Student::getName(){
return Name;
}

int Student::getAge(){
return Age;
}

void Student::printStudentInfo(){
cout << "Opiskelijan nimi: "<< getName()<<endl;
cout <<"Opiskelijan ika: "<< getAge()<<endl;
}

Student::~Student(){
}
