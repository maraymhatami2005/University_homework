#include<iostream>
using namespace std;
//redefining operator =

class Ratio
{
    public:
        Ratio(int a = 0, int b = 1): num(a), den(b){cout << "An object born" << endl;}

        ~Ratio(){cout << "An object died" << endl;}

        Ratio(const Ratio &r){num = r.num; den = r.den;}

        //void operator=(const Ratio &n){num = n.num, den = n.den;}

        Ratio& operator=(const Ratio &s){
            num = s.num;
            den = s.den;
            return(*this);
        }


        void Print(){cout << num << "/" << den << endl;}


    private:
        int num;
        int den;

};

int main(){
    Ratio x(3,4);
    Ratio y(x);
    Ratio z;
    z = y;
    z.Print();
}