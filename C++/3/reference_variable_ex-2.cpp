#include <iostream>
using namespace std;

int ref_k=0;
int k=0;

int& ref_haha(int a) {
    ref_k+=a;
    cout<<&ref_k<<endl;
    return ref_k;
}

int haha(int a) {
    k+=a;
    cout<<&k<<endl;
    return k;
}

int main(){

    cout<< "The Function named ref_haha with its return type is reference variable " <<endl;
    
    cout<< ref_haha(3) <<endl;
    ref_haha(3)+=4; // available 
    cout<<&ref_haha(1)<<endl;
    cout<< ref_haha(3) <<endl;
    
    cout<< "The Function named haha " <<endl;
    cout<< haha(3) <<endl;
    //haha(3)+=4; // unavailable
    //cout<<&haha(1)<<endl; //unavilable
    cout<< haha(3) <<endl;
}


