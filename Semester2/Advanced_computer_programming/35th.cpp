#include<iostream>
using namespace std;
// pointer to object

class ratio{

    public:
        float result();
        void print();
        void assign(int, int);
        float z;

    private:

        int num;
        int den;
        float r;
};


void ratio::assign(int a, int b)
{
    num = a;
    den = b;
}

void ratio::print()
{
    cout << num << "/" << den <<"=" << result() << endl;
}

float ratio::result()
{
    
    return (r = float(num)/den);
}


int main()
{
    ratio x,*y, *s;
    x.assign(3,4);
    y=new(ratio);
    s =new(ratio);

    s->assign(5,6);
    s->print();

    y->z = 7.45;
    (*y).z = 5.3;

    (*y).assign(3,7);
    y->assign(4,9);

    y->print();
    (*y).print();

}