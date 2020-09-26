#include <fstream>
#include <iostream>
using namespace std;
class CComplexPoint;
class CComplexVector {
public:
    CComplexVector();
    CComplexPoint* getVector();
    void setVector(ifstream &fin);
    void printVector();
    CComplexPoint scala(CComplexVector &q);
    CComplexVector operator+(CComplexVector &q);
    CComplexVector operator-(CComplexVector &q);
private:
    CComplexPoint *e;//Назовем так начало массива, то есть вектора
};