#include<iostream>
#include<cmath>
using namespace std;

// write a function that get 3 numbers as  triangle sides then calculate the area base on the formula below
// area = √m(m-a)(m-b)(m-c)
// m = (a+b+c) /2

float Area(int a, int b, int c)
{
    float s, m;
    m = (a+b+c) / 2;
    s = sqrt(m*(m-a)*(m-b)*(m-c));
    return(s);
}

int main()
{
    float x,y,z;
    cout << "Enter 3 numbers: ";
    cin >> x >> y >> z;
    cout << Area(x, y, z);
}