#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"
using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;

    string name;
    int age;
    string search;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;
        cout<<endl;

        switch(selection)
        {
        case 0:{
            cout << "Give your name: ";
            cin >> name;
            cout << "Give your age: ";
            cin >> age;
            cout<<endl;
            studentList.push_back(Student(name,age));

            break;
        }
        case 1:{
            cout << "Student names: " << endl;
            for(Student& names : studentList){
                cout << names.getName() << endl;
            }
            break;
        }
        case 2:{

            sort(studentList.begin(), studentList.end(),[](Student& a, Student& b){
            return a.getName() < b.getName();
            });
            cout << "Students in order by name: " << endl;
            for(Student& s : studentList){
            s.printStudentInfo();
            }
            break;
        }
        case 3:{
            sort(studentList.begin(), studentList.end(),[](Student& a, Student& b){
                return a.getAge() < b.getAge();
            });
            cout << "Students in order by age: " << endl;
            for(Student& age : studentList){
                age.printStudentInfo();
            }
            break;
        }
        case 4:{
            cout << "Give an name of student: ";
            cin >> search;
            auto it = find_if(studentList.begin(), studentList.end(),[&search](Student& name){
                return name.getName() == search;
            });
            if(it != studentList.end()){
                cout << "Opiskelija loydetty: "<<endl;
                it->printStudentInfo();
            }else{
                cout << "Opiskelijaa ei loytynyt..."<<endl;
            }
             break;
        }
        default:{
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
        }
    }while (selection != 5);
        return 0;
}
