#include<iostream>
using namespace std;

class ratio
{
    public:
        ratio(int s,int m)
        {
            num =s;
            den = m;
            r = float(s) / m;
        }

        ratio(int t)
        {
            num = t;
            den = 1;
            r = t;
        }

        ratio();// constructor declaration only


        void print();
    
    private:
        int num;
        int den;
        float r;


};

ratio::ratio()// outside definition of constructor
{
    num = 0;
    den = 1;
    r = 0;
}


void ratio::print()
{
    cout << num<< '/' << den << '=' << r;
}

int main()
{
    ratio x, y(7), z(5,2); 
    x.print();
    cout << endl;

    y.print();
    cout<< endl;

    z.print();
    cout << endl;

}