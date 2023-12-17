#include <iostream>
using namespace std;
int main()
{
    int a,b,x,y,z,BMM,KMM;
    cout << "Enter two numbers: ";
    cin >>a >>b;
    x = a, y = b;
    while(y!=0)
    {
        z=x;
        x=y;
        y=  z % y;
    }
    BMM = x;
    KMM = ((a*b) / BMM);
    cout <<BMM <<"\n" <<KMM;
}