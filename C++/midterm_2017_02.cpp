#include <iostream>
#include "midterm.h"

using namespace std;

int main(){
    Triangle t(0.0,0.0,3.0,0.0,0.0,5.0);
    cout<<t.area()<<endl;
    t.move(3.0,5.0);
    cout<<t.area()<<endl;
    t.scale(2.0,2.0);
    cout<<t.area()<<endl;
    
}
