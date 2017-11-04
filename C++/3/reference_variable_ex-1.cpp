#include <iostream>

using namespace std;

int main(){

    int a=3;
    int b=a;
    int &c = a; 
    
    c=9;
    
    cout<<"The vale of a is " <<a <<" with its address at "<< &a<<endl;
    cout<<"The vale of a is " <<b <<" with its address at "<< &b<<endl;
    cout<<"The vale of a is " <<c <<" with its address at "<< &c<<endl;

// http://mhspecial.tistory.com/entry/%EB%A0%88%ED%8D%BC%EB%9F%B0%EC%8A%A4-%EB%B3%80%EC%88%98Reference-variable
/*
The vale of a is 9 with its address at 0x6ffe34
The vale of a is 3 with its address at 0x6ffe30
The vale of a is 9 with its address at 0x6ffe34

--------------------------------
Process exited after 0.3693 seconds with return value 0
Press any key to continue . . .
*/
}

