#include <iostream>
using namespace std;

int main()
{
    int a=1, b=1, c;
    cout <<a <<b;
    c = a+b;
    while(c<=100)
    {
        cout << c;
        a =b;
        b=c;
        c= a+b;
    }
}