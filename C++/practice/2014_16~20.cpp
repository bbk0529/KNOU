#include <iostream>

using namespace std;

class BClass {

protected:
    string id;
public :
    BClass (const string &s) : id(s) {}
    void action() const { cout<<"[ BClass ] "<<id<<endl;}
    virtual void action2() const { cout<<"[ BClass ] "<<id<<endl;}
    string getID() const {return id;}

};

class DClass1 : public BClass {
    string att;
public :
    DClass1(const string& s1, const string& s2) : BClass(s1), att(s2) {}
    string getAtt() const { return att;}
    void action() const{
        cout<<"[ DClass1 ] "<<getID() << " " <<att<< endl;
    }
    void action2() const{
        cout<<"[ DClass1 ] "<<getID() << " " <<att<< endl;
    }
};

class DClass2 : public DClass1 {
protected:
    int x;
public :
    DClass2(const string& s1, const string& s2, int n) : DClass1(s1,s2), x(n) {}
    void action() const{
        cout<<"[ DClass2 ] "<<getID() << " " <<getAtt() << " " <<x<<endl;
    }
    void action2() const{
        cout<<"[ DClass2 ] "<<getID() << " " <<getAtt() << " " <<x<<endl;
    }
};

class DClass3 : public DClass2 {
public :
    DClass3(const string& s1, const string& s2, int n) : DClass2(s1,s2,n) {}
    void action() const{
        cout<<"[ DClass3 ] "<< getID() << " " <<getAtt() << " " <<x<<endl;
    }
    void action2() const{
        cout<<"[ DClass3 ] "<< getID() << " " <<getAtt() << " " <<x<<endl;
    }
};


int main() {
    DClass1* pDC1 = new DClass3("ab","cd", 10);
    DClass2* pDC2 = new DClass3("ab","cd", 10);
    DClass3* pDC3 = new DClass3("ab","cd", 10);
    BClass* pBC = pDC1;

    cout<<"All 4 class pointer variables ( for DClass1, DClass2, Dclass3 and BClass) are assigned to new DClass3"<<endl;
    cout<<"ACTION1"<<endl;
    pBC->action();
    pDC1->action();
    pDC2->action();
    pDC3->action();
    
    cout<<endl;
    cout<<"ACTION2 with VIRTUAL FUNCTION"<<endl;
    pBC->action2();  
    pDC1->action2();
    pDC2->action2();
    pDC3->action2();
}




