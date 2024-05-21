#include<iostream>
#include<cmath>
using namespace std;

class point{

    public:
        void SetPoint(float a,float b,float c,float e, float r, float t);
        void Print();
        float Norm();


    private:
        
        float x,y,z,m,n,p;

};

void point::SetPoint(float a,float b,float c, float e, float r, float t)
{
    x = a;
    y = b;
    z = c;
    m = e;
    n = r;
    p = t;
}



void point::Print()
{
    cout << "The first point is: (" << x << "," << y << "," << z <<")" << endl;
    cout << "The second point is: (" << m << "," << n << "," << p <<")" << endl;
}

float point::Norm()
{
    float distance;
    distance = sqrt(
     pow(x-m, 2) +pow(y-n, 2) + pow(z-p,2)
    );
    return distance;
}

int main()
{
    point p1;
    int a,b,c,d,e,f,g;
    cout <<"Enter 3 numbers for the first point: " << endl;
    cin >> a>> b>>c;
    cout << "Enter 3 numbers for the second point: " << endl; 
    cin >> e>> f>>g;

    p1.SetPoint(a,b,c,e,f,g);
    
    p1.Print();
    cout <<p1.Norm() << endl;

}