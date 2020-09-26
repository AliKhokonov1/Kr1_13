#include <fstream>
#include <iostream>
#include"CComplexPoint.h"
#include"CComplexVector.h"
using namespace std;
#define N 3
CComplexVector::CComplexVector(){
	e=new CComplexPoint[N];	
}//Выделяет память на массив из комплексных чисел, то есть вектор
CComplexPoint* CComplexVector::getVector(){
	return e;
}//Возвращает начало массива, то есть вектора
void CComplexVector::setVector(ifstream &fin){
	double a,b;
	for(int i = 0;i < N; i++){
	fin>>a>>b;
		e[i]=CComplexPoint(a,b);
	}
}
void CComplexVector::printVector(){
    cout<<"(";
	for(int i = 0; i < N; i++){
		cout<<"("<<e[i].Re()<<","<<e[i].Im()<<")";
	}
	cout<<")";
}
CComplexPoint CComplexVector::scala(CComplexVector &q){
	CComplexPoint s(0,0);
	for(int i = 0; i < N; i++){
		s=s+CComplexPoint(e[i].Re()*q.getVector()[i].Re()+e[i].Im()*q.getVector()[i].Im(),e[i].Re()*q.getVector()[i].Im()-e[i].Im()*q.getVector()[i].Re());		
	//Скалярное произведение по правилам комплексных векторов
	}
	return s;
}
CComplexVector CComplexVector::operator+(CComplexVector &q){
	CComplexVector p;
	for(int i = 0; i < N; i++){
		p.getVector()[i]=q.getVector()[i]+e[i];
	}
	return p;
}
CComplexVector CComplexVector::operator-(CComplexVector &q){
	CComplexVector p;
	for(int i = 0; i < N; i++){
		p.getVector()[i]=q.getVector()[i]-e[i];
	}
	return p;
}
