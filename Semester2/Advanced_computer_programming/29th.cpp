#include<iostream>
using namespace std;
// initializing list in constructor
class ratio{
    public:
        ratio(int s, int m): num(s), den(m), r(float(num)/den){};
        void print();
      

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
    ratio y(5,7);
    y.print();
}