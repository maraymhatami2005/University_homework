#include <iostream>
using namespace std;

int main()
{

    int n, x, s1 = 0, s2, z, y = 0;
    cout << "Enter a number: ";
    cin >> n;
    x = n;
        while(x>0)
        {
        z = x % 10;
        s1 = s1 + z;
        y = y*10 + z;
        x = x/10;
        }
    s2 = n + y ;
    cout << s1 << " "<< s2;

}