#include<iostream>
using namespace std;
// copy constructor

class ratio{
    public:
        ratio(int a=0, int b=1):num(a), den(b){t= float(num)/den;};
        ratio(const ratio &r) : num(r.num), den(r.den){t= float(num)/den;};
        void print();

    private:

    int num;
    int den;
    float t;
   
};

void ratio::print(){
    cout << num << "/" << den << "=" << t <<endl;
}


int main(){
    ratio x(7,5);
    ratio y(x);
    y.print();
    x.print();
}

