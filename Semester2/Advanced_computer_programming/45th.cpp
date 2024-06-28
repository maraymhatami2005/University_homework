#include<iostream>
using namespace std;
//redefining operator -

class Ratio{
    friend Ratio operator-(const Ratio &, const Ratio&);

    public:
        Ratio(int a = 0, int b = 1): num(a), den(b){cout << "An object born" << endl;}
        ~Ratio(){cout << "An oject died" << endl;}
        void Print(){cout << num << "/" << den << endl;}



    private:
        int num, den;
    
};

Ratio operator-(const Ratio &x, const Ratio &y)
{
    Ratio z((x.num*y.den) - (y.num*x.den), (y.den * x.den));
    return z;
}

int main()
{
    Ratio x(4,6), y(1,3);
    Ratio z;
    z = x - y;
    z.Print();
}