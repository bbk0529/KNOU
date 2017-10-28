#ifndef STUDENT1_H_INCLUDED
#define STUDENT1_H_INCLUDED
#include <iostream>
#include <string>
#include "Person1.h"
using namespace std;

class Student : public Person {
    string school;
public:
    void setSchool (string s) {school=s;}
    const string getSchool () const {return school;}
    void print() const{
        Person::print();
        cout<<"goes to " <<school;
    }
}; 

#endif 
