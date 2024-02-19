#include <iostream>
using namespace std;
// calculating the inner product of two vector

int main()
{
    int x[5], y[5],i, M=0;
    
    for(i=0; i<5; i++)
    {
        cout << "enter a number: ";
        cin >> x[i];
    }

    for(i=0; i<5; i++)
    {
        cout << "enter a number: ";
        cin >> y[i];
    }

    for(i=0; i<5; i++)
        M = M + (x[i]*y[i]);

    cout << "The inner product is " << M;

    return 0;
}