#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED
using namespace std;
class Triangle {
    int *x;
    int *y;

public:
    Triangle (double x1,double y1,double x2,double y2,double x3,double y3){  
        x=new int [3]; 
        y=new int [3];   
        x[0]=x1;x[1]=x2;x[2]=x3; 
        y[0]=y1;y[1]=y2;y[2]=y3; 
    }

    void move (double dx, double dy) const {
        x[0]+=dx;x[1]+=dx;x[2]+=dx; 
        y[0]+=dy;y[1]+=dy;y[2]+=dy;

        for (int i=0;i<3;i++){
            cout<<" x"<<i<<" : "<<x[i]; 
            cout<<"\ty"<<i<<" : "<<y[i];
            cout<<endl;
        }

    }

    void scale (double sx, double sy) const {
        x[0]*=sx;x[1]*=sx;x[2]*=sx; 
        y[0]*=sy;y[1]*=sy;y[2]*=sy;
        
        for (int i=0;i<3;i++){
            cout<<" x"<<i<<" : "<<x[i]; 
            cout<<"\ty"<<i<<" : "<<y[i];
            cout<<endl;
        }
    }

    double area () {
        return ((x[0]* y[1]-y[0]* x[1])
        +(x[1]*y[2]-y[1]*x[2])
        +(x[2]*y[0] - y[2]*x[0]) / 2);
    }
};
#endif
