#include"CComplexPoint.h"
#include"CComplexVector.h"
#include <fstream>
#include <iostream>
using namespace std;
#define N 3
double Autotest (void) {
    CComplexPoint sk;
    CComplexVector q,e,sum,raz;
    ifstream fin("test.txt");
    q.setVector(fin);e.setVector(fin);
    ifstream vin("restest.txt");
    sum.setVector(vin);raz.setVector(vin);
    sk=e.scala(q);
    for (int i=0;i<N;i++) {
        if ((sum.getVector()[i].Re() != (q+e).getVector()[i].Re()) || (sum.getVector()[i].Im() != (q+e).getVector()[i].Im())) {
            cout<<"Autotest failed"<<endl;
            return 1;
            }
    }
    for (int i=0;i<N;i++) {
        if ((raz.getVector()[i].Re() != (q-e).getVector()[i].Re()) || (raz.getVector()[i].Im() != (q-e).getVector()[i].Im())) {
            cout<<"Autotest failed"<<endl;
            return 2;
        }  
    }
    if ((sk.Re() != 3) || (sk.Im() != 0)) {
       cout<<"Autotest failed"<<endl;
            return 3; 
    }
    cout<<"Autotest passed!"<<endl;
    return 0;
}
