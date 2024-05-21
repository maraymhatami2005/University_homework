#include<iostream>
using namespace std;
// static data type members

class ratio{

    public:
    
        void print();
        float result();
        static int count;

        
        ratio(int a=0, int b=1):num(a), den(b)
        {
            cout << "An object born" << endl;
            count ++;
        };

        ~ratio()
        {
            cout << "An object die" << endl;
            count --;
        }


    private:
        int num;
        int den;
        float r;

};

void ratio::print()
{
    cout << num << "/" << den <<"=" << result() << endl;
}

int ratio::count=0; 

float ratio::result()
{
    return ( r = float(num)/den);
}

int main()
{
    ratio x,y(7), z(22,7);
    cout << x.count <<endl;
    {
        ratio x(7,5), a;
        cout << x.count;
    }
    cout << ratio::count;
}

