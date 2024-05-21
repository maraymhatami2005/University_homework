#include<iostream>
using namespace std;
// destructor

class ratio{
    public:
        ratio(int a =0, int b=1):num(a), den(b)
        {
            cout << "An object born"<< endl;
        };

        ratio(const ratio &object): num(object.num), den(object.den){};
        ~ratio(){cout << "An object died" << endl;}
        void print();
        
        float fraction()
        {
            return (r = float(num)/den);
        }

    private:
        int num;
        int den;
        float r;


};


void ratio::print(){
    cout << num << "/" << den << fraction() << endl;
}

int main(){

    ratio x, y(7), z(3,4);
    ratio m(z);
}