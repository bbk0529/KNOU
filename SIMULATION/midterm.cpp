#include <iostream>
#include <cstdlib>
#include <math.h>

#define SEED        358188
#define MEAN        6.0
#define PRARR       0.5
#define TIMESTEP    1
#define PUMPNUMBER  2
#define TIMELIMIT   100

using namespace std;

void random(long *pn,float *pu){
    *pn=*pn* 843314861 + 453816693;
    if (*pn<0) {
        *pn=*pn+2147483647;
        *pn=*pn + 1;
    }
    *pu = *pn * 0.46556612e-9;
    return;
}


void poissn(long *np, float mean, int *pp){ // np = seed, mean = average, pp = random variable
    float prod, b, u;
    *pp = 0;
    b=exp(-mean);
    prod=1;
    random(np, &u);
    prod= prod*u;
    
    while (prod>=b) {
        random(np, &u);
        prod=prod*u;
        ++(*pp);

    }
}


int main()
{
	int queue=0;
    long n=SEED;
	int time = 0; // 현재시간


    int pump[PUMPNUMBER];
    for (int i=0;i<PUMPNUMBER;i++) pump[i]=0; 
	
	int totalGuest = 0; // 누적된 손님수
	int totalQueue = 0; // 누적된 대기 수

	while (time < TIMELIMIT) {
		time += TIMESTEP;
		int arrival = 0;
        float pu; // 손님이 도착할 확률을 계산하기 위한 난수 저장  
		random(&n,&pu); 

		if (pu < PRARR*TIMESTEP) { // 손님이 도착한 경우 
            queue +=1;
			totalGuest += 1;
			arrival = 1;
		}

        for (int q=0;q<PUMPNUMBER;q++){ 
            if (pump[q]>0) pump[q] -= TIMESTEP;
    		if (pump[q] <=0 && queue > 0) {
                    queue -= 1;
                    int p;
                    poissn(&n, MEAN, &p);
                    pump[q] = p;
    		}
        }
		totalQueue += queue;
		cout << endl << "	TIME :   " << time << "   ARRIVAL      " << arrival <<"   QUEUE " << queue;
        for (int i=0; i<PUMPNUMBER; i++) {
            cout <<"    pump" << i+1 << ": " << pump[i];
        }
	}
	cout << endl << endl;
    cout <<"      평균대기행렬길이(aveque = totque / (tlimit/tstep))    " << totalQueue / (TIMELIMIT/TIMESTEP) << endl;
    cout <<"      평균대기시간(avgw =  totque / totarr                  " << totalQueue / totalGuest   << endl;

    return 0;
}
