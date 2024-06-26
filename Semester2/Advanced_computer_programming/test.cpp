#include<iostream>
using namespace std;


int f(int n)
{
    if(n==0)
        return 0;

    return n+f(n-1);
}
int f2(int n)
{
    if(n<1)
        return 1;
    else
        return f(n-1) + f(n-1); 
}

int f3(int n){
    if(n<=1)
        return n;
    else
        return f3(n-1) + f3(n-2);
}
int main()
{
    int n=5;
    cout << f(n) << endl;
    cout <<f2(n) << endl;
    cout << f3(n) << endl;

}