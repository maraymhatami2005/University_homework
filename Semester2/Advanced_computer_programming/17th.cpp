#include<iostream>
using namespace std;

// calculating x to the power of n in recursive function

float power1(float x, int n)
{
    if (n ==0)
        return(1);
    else
        return(x * power1(x, n-1));
}

float power2(float x, int n)
{
    float p;
    if(n==0)
        return(1);
    else
    {
        p = power2 (x, n/2);

        if (n%2 == 0) // checking if n is even
            return (p *p);
        else 
            return(x * p * p);
    }
}

int main(){
    int a, b;
    cout << "Enter the base and power value";
    cin >> a >> b;
    cout << power1(a,b) << endl;
    cout << power2(a,b) << endl;
}