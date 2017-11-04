#include <iostream>

using namespace std;

void swap (int& x, int& y) {
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main(){

    int x=1;
    int y=9;
    cout<<"x : "<< x <<endl;
    cout<<"y : "<< y <<endl;
    swap(x,y);
    cout<<"swapped"<<endl;
    cout<<"x : "<< x <<endl;
    cout<<"y : "<< y <<endl;    
    


}


