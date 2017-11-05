#include <iostream>

using namespace std;

class BClass {

protected:
    string id;
public :
    BClass (const string &s) : id(s) {}
    virtual void action() const { cout<<id<<endl;}
    string getID() const {return id;}

};

class DClass1 : public BClass {
    string att;
public :
    DClass1(const string& s1, const string& s2) : BClass(s1), att(s2) {}
    string getAtt() const { return att;}
    void action() const{
        cout<<getID() << " " <<att<< endl;
    }
};

class DClass2 : public DClass1 {
    int x;
public :
    DClass2(const string& s1, const string& s2, int n) : DClass1(s1,s2), x(n) {}
    void action() const{
        cout<<getID() << " " <<getAtt() << " " <<x<<endl;
    }
};

int main() {
    DClass1* pDC1 = new DClass2("ab","cd", 10);
    BClass* pBC = pDC1;
    pBC->action();
    pDC1->action();
}



