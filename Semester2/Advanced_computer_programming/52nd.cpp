#include<iostream>
using namespace std;
//redefining operator >=
class Ratio{
    friend int operator>=(const Ratio &, const Ratio &);
    public:
        Ratio(int a = 0, int b = 1): num(a), den(b){}
        ~Ratio(){}
        void Print(){cout << "\n" << num << "/" << den << endl;}

    private:
        int num, den;
};

int operator>=(const Ratio &x, const Ratio &y)
{
    if(x.num * y.den >= x.den * y.num)
        return 1;
    else
        return 0;
}

int main()
{
    Ratio x(3,8) , y(3,4);
        if (x >= y) {
            x.Print();
            cout << "is greater than or equal to ";
            y.Print();
            cout << endl;
        } else {
            x.Print();
            cout << "is not greater than or equal to ";
            y.Print();
            cout << endl;
        }
}