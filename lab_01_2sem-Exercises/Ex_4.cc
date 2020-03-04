#include <iostream>
#include <stdio.h>
using namespace std;

class Vector
{
public:
    Vector(double);
    size_t dimension_;
    
private:
    double data_[3] = {0,0,0};
};

Vector::Vector(double x)
{
    cout << "\n Creating a new Vector class object in R1 space :" <<endl;
    dimension_ = 1;
    data_[0] = x;
}

int main()
{
    Vector r1(1.0); // R1
    cout << "Vector class object with the number of dimensions:" << r1.dimension_  << endl;
    Vector r2(1.0); // R2
    cout << "Vector class object with the number of dimensions:" << r2.dimension_  << endl;
    Vector r3(1.0); // R3
    cout << "Vector class object with the number of dimensions:" << r3.dimension_  << endl;
    Vector r4(1,2.7)
    


}