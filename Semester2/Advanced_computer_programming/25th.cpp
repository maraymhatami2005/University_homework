#include<iostream>
using namespace std;
// working with fractions

class ratio
{
    public:
        void assign(int , int);
        void print();
        float r;

    private:
        int num;
        int den;
}; 
/*
 we can also use:
    class ratio
{
    public:
        void assign(int s, int m)
        {num = s; den = m; r = float(s) / m};

        void print()
        {cout << num<< '/' << den << '=' << r;}

        float r;

    private:
        int num;
        int den;
}; 


*/

void ratio::assign(int s, int m)
{
    if (m == 0)
    {
        cout << "Not valid, denominator can not be zero." << endl;
        return ;
    }
    
    num = s;
    den = m;
    r = float(s)/m;
}

void ratio::print()
{
    cout << num<< '/' << den << '=' << r;
}

int main()
{ 
    int num, den;
    ratio x;
    x.r = 3.75;
    cout << "Enter two numbers for Numerator and Denominator" << endl;
    cin >> num >> den;

    x.assign(num,den);
    x.print();
}