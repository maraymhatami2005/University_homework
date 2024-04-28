#include<iostream>
using namespace std;
// using constructor

class ratio
{
        public:
            ratio(int s, int m)
            {
                num = s;
                den = m;
                r = float(num) /den;
            }

            void print()
            {
                cout << num << "/" << den << "=" << r;
            }

        private:
        float r;
        int num;
        int den;

};

int main()
{
    ratio x(5,2);
    x.print();
}