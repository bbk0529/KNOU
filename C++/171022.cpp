#include <iostream>
using namespace std;

int main(){
    int *intPtrX;    
    intPtrX = new int [3];

    int *intPtrY;    
    intPtrY = new int [3];

    *intPtrX=1;
    *(intPtrX+1)=2;
    intPtrX[2]=3;

    cout<<intPtrX <<"    "<< *intPtrX << endl;
    cout<<(intPtrX+1) <<"     "<< *(intPtrX+1) << endl;
    cout<<(intPtrX+2) <<"     "<< *(intPtrX+2) << endl;
}
