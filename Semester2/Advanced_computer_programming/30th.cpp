#include<iostream>
using namespace std;
// Default Constructors

class ratio
{
    public:
/*
        ratio(){num = 0; den =1; r=0;}
        ratio(int s){num =s; den =1; r = s;}
        ratio(int s, int m)
        {
            num =s;
            den = m;
            r = float(num)/den;
        } 
*/
        void print();
        ratio(int a=0, int b=1): num(a),den(b){r=float(num)/den;};

    private:

        int num;
        int den;
        float r;
};

void ratio::print()
{
    cout << num << "/" << den << "=" << r<< endl;
}

int main()
{
    ratio x, y(3), z(4,3);
    x.print();
    y.print();
    z.print();

}