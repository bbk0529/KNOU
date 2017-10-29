#ifndef PERSON2_H_INCLUDED
#define PERSON2_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;

public:
    Person(const string &n) {
        cout<<"The Constructor for PERSON" << endl;
        name=n; 
    }    
    ~Person (){
        cout <<"The Destructor for PERSON" << endl;

    }
    const string getName() const {return name;}
    void print() const {cout<<name;}

};
#endif 
