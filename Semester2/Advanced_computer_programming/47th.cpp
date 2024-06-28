#include<iostream>
using namespace std;
//redefining operator *=

class Ratio{
    friend Ratio operator*(const Ratio &, const Ratio &);
    public:
        Ratio(int a = 0, int b = 1): num(a) , den(b){}
        ~Ratio(){}
        void Print(){cout << num << "/" << den << endl;}
        Ratio& operator=(const Ratio &);
        Ratio& operator*=(const Ratio &r){
            num = num * r.num;
            den = den *r.den;
            return(*this);
        }

    private:
    int num, den;
};

Ratio operator*(const Ratio &x, const Ratio &y){
    Ratio z (x.num*y.num  , x.den*y.den);
    return z;
}

Ratio& Ratio::operator=(const Ratio &r){
    num = r.num;
    den = r.den;
    return(*this);
}

int main(){
    Ratio a(3,7), b(2,5), c(5,2);
    Ratio z;
    z = a*b;
    z.Print();
    (a*=b).Print();
}