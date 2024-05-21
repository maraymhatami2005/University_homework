#include<iostream>
using namespace std;
// const keyword in cpp
// const data_type var_name = value;
class ratio{
    public:
        ratio(int a=0, int b=1): num(a), den(b){};
        void assign(int, int);
        void print() const;

    private:
        int num;
        int den;

};

void ratio::assign(int a, int b){
    num = a;
    den = b;
}
void ratio::print() const{
    cout << num << "/" << den << endl;
}

int main(){
    ratio x(7,5);
    const ratio PI(22,7);
    x.assign(9,4);
    PI.print();
}