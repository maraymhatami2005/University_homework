#include<iostream>
using namespace std;
//redefining operator *
class Ratio{

    friend Ratio operator*(const Ratio &, const Ratio&);

    public:
        
        Ratio(int a = 0, int b = 1): num(a), den(b){cout << "An object born" << endl;}

        ~Ratio(){cout << "An object died" << endl;}

        void Print(){cout << num << "/" << den << endl;}



    private:

        int num, den;
};

Ratio operator*(const Ratio &x, const Ratio &y)
{
    Ratio z(x.num * y.num, x.den * y.den);
    return z;
}

int main()
{
    Ratio x(1,2), y(3,4);
    Ratio z = x*y;

    z.Print();
}