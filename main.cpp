#include"CComplexPoint.h"
#include"CComplexVector.h"
#include "stdio.h"
#include <fstream>
#include <iostream>
#define N 3
using namespace std;
int Autotest();
int main () {
CComplexVector q,e;
ifstream fin("zho");
q.setVector(fin);
e.setVector(fin);
cout<<"Скалярное произведение q и e: "<<endl; e.scala(q).print(); cout<<endl<<endl;
cout<<"Сумма q и e: "<<endl; (q+e).printVector(); cout<<endl<<endl;
cout<<"Разность q и e: "<<endl; (q-e).printVector();
return 0;
}
