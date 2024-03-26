#include<iostream>
using namespace std;

// recursive algorithm for factorial

int factorial(int n)
{
    if (n==0)
        return 1;
    return n*factorial(n-1);
}


int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << factorial(x);
}