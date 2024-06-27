#include <iostream>
using namespace std;

class Ratio {
    friend Ratio operator%(const Ratio &, const Ratio &);
public:
    Ratio(int a = 0, int b = 1): num(a), den(b) {
        cout << "An object born" << endl;
    }
    ~Ratio() {
        cout << "An object died" << endl;
    }
    void Print() {
        cout << num << "/" << den << endl;
    }

private:
    int num, den;
};

Ratio operator%(const Ratio &x, const Ratio &y) {
    Ratio z(((x.num * y.den) % (x.den *y.num)), (x.den * y.den));
    return z;
}

int main(){
    Ratio x(3,4), y(1,2);
    Ratio z;
    z = x % y;
    z.Print();
}
