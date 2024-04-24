#include<iostream>
using namespace std;
// Print binary represention of a number

void Binary(int n)
{
    if(n==0)
        return;
    else
    {
        Binary(n/2);
        cout << n%2;
    }
}

int main()
{   int number;
    cout<< "Enter a number: ";
    cin >> number;
    Binary(number);
    
}