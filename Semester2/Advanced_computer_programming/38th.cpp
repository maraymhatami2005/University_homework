#include<iostream>
#include<cmath>
using namespace std;
// point class

class point{

    public:
        point(float a = 0,float b = 0,float c = 0) : x(a), y(b), z(c){}
        void SetPoint(float a, float b, float c);
        void Print();
        float Norm();
        void Neg();



    private:
    float x,y,z;

};

void point::SetPoint(float a, float b, float c)
{
    x = a;
    y = b;
    z = c;
}

void point::Print()
{
    cout << "(" << x << "," << y << "," << z << ")" << endl;
}

float point::Norm()
{
    return sqrt((x*x + y*y + z*z));
}

void point::Neg()
{
    x = -x;
    y = -y;
    z = -z;
}

int main()
{
    point p1, p2(3.4), p3(2.75,4), p4(1,2,3);
    p3.SetPoint(5,6,7);
    p4.Print();
    cout << "|o - p4|" <<" = " << p4.Norm();
    
}
