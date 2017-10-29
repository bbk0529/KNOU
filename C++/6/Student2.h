#ifndef STUDENT2_H_INCLUDED
#define STUDENT2_H_INCLUDED
#include <iostream>
#include <string>
#include "Person2.h"
using namespace std;

class Student : public Person {
    string school;
public:
    Student(const string &n, const string &s) : Person(n) {
        cout<<"The constructor for STUDENT" << endl;
        school=s;
    }

    ~Student(){
        cout<<"The Destructor for STUDENT"<<endl;
    
    }
    const string getSchool() const { return school;}
    void print() const {
        Person::print();
        cout<<"goes to " << school;
    }
};

#endif
