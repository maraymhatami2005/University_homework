#include<iostream>
using namespace std;

// the inverse of a fraction

class ratio
{
    public:
        void assign(int s, int m)
        { 
                if (m ==0)
            {
            cout << "Not valid, denominator can not be zero." << endl;
            return ;
            }
            num =s; 
            den = m;
            r = float(s) / m;
        }

        void convert()
        {
            int temp;
            temp = num;
            num = den;
            den = temp;
            r = float(num) / den;
        }

        void print()
        {
            cout << num<< '/' << den << '=' << r << endl;
        }

        float invert()
        {
            return r;
        }


    private:
        int num;
        int den;
        float r;

};

int main()
{  
     ratio x;
    int num, den;
    cout << "Enter two numbers for Numerator and Denominator" << endl;
    cin >> num >> den;

    x.assign(num,den);
    x.print();
    cout << "decimal part of x " << x.invert() << endl;
    x. convert();
   
    x.print();


}