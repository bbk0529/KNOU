#include <iostream>
#include "midterm_2017_02.h"
using namespace std;

int main(){
    int n=-1;
    int choice;
    while(n<1){ // if less than 0, size of window is asked again. 
       cout << "Please confirm the size of window for MOVING AVERAGE :" << endl;
	   cin >> n;
    }     
    MovingAvg movingAvg(n); //Constructor

    while(true) { // repeated until 3 is inputed. 

        cout << "\n\nPlease select a menu" << endl;
        cout << "1. Input Data" <<"\t" <<"2. Reset Data" <<"\t"<<"3. End program " <<endl;
        cin >> choice;   
        switch(choice) {
            case 1: 
                    int val;
                    cout << "\n\t Please input a number\n\n";
		            cin >> val;
                    movingAvg.add(val);
                    break;
            case 2: 
                    cout << "\t Please confirm the size of window for MOVING AVERAGE :" << endl;
	                cin >> n;
                    movingAvg.reset(n);
                    break;
            case 3: 
                    return 0;
            default: 
                continue;
            
        }
        cout << endl <<"\t Moving average : " << movingAvg.getAvg() << endl;
    }
}
