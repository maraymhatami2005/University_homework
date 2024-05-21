#include<iostream>
using namespace std;
// private function

class ratio{
    public:
        ratio(int a =0, int b=1):num(a), den(b){};
        void print();
        void FloatPrint();


    private:
        int num;
        int den;
        float ToFloat(){return(float(num)/den);};
};

void ratio::print(){
    cout << num << "/" << den<< "=" ;
}

void ratio::FloatPrint(){
    print();
    cout << ToFloat();
}

int main(){
    ratio x(3,4);
    x.FloatPrint();
}