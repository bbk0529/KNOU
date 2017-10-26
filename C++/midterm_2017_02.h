#ifndef MOVINGAVG_H_INCLUDED
#define MOVINGAVG_H_INCLUDED
using namespace std;
class MovingAvg {
    int *x;
	int maxNum;
	int currNum; //indicating numer of array for next input.
    
public:
    MovingAvg (int n){  
        createArray(n);
    }
   
    
    void initArray(int n){
        for (int i=0;i<n;i++){
            x[i]=0;
            cout << "x[" << i << "] : " << x[i] << "\t"; 	
        }
    }    

	void createArray(int n) {
		x=new int [n];
       	initArray(n);
        cout << endl;
		currNum=0;
        maxNum=n;
	}
	
    void reset (int n) {
        if (n<1) n=maxNum;
            else maxNum=n;
		delete [] x;
		createArray(n);
    }

	void add (int val){
        int a=(currNum++)%(maxNum);
        cout<<"\tx["<<a<<"]="<< val << endl;
		x[a]=val;
	}
	
    double getAvg () const {
		int sum=0;
		for (int i=0;i<maxNum;i++){
            sum+=x[i];
            cout<<"\n\tx[" << i <<"] : " << x[i] << "\t"; 	
        }
         
		return ((double)sum/(double)maxNum);
		 
    }

    
};
#endif
