#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;
class Student
{
public:
    Student();
    Student(string,int);
    void setAge(int);
    void setName(string ageOfStudent);
    string getName();
    int getAge();
    void printStudentInfo();
    ~Student();


private:
    string Name;
    int Age;

protected:

};

#endif // STUDENT_H
