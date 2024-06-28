#include<iostream>
using namespace std;
//redefining operator +=

class Ratio{
    public:
    Ratio(int a = 0, int b = 1): num(a), den(b){}
    ~Ratio(){}
    void Print(){cout << num << "/" << den << endl;}
    Ratio& operator+=(const Ratio &r){
        num = num * r.den + r.num * den;
        den = den * r.den;
        return(*this);
    }


    private:
    int num, den;
};

int main(){
    Ratio a(3,7), b(2,5), c(5,2);
    Ratio z;
    (a+=b).Print();
}