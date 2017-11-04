#include <iostream>
#include "4-6_CounterM.h"
using namespace std;

int main(){
    CounterM counterM(10);
      
    int input=0;
    while(true) {
        cin >> input;
        switch (input) {
           case 1 : {
                counterM.count();       
                cout<<"********"<<counterM.getValue()<<endl;
                break;
            }
           case 2 : {
                counterM.countDown();       
                cout<<"********"<<counterM.getValue()<<endl;
                break;
            }
            default : continue;
        }
    }
};
