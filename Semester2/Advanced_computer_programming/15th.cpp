#include<iostream>
using namespace std;
// recursive vs non-recursive function GCD

int GCD1(int a, int b){// non-recursive
    int temp1, temp2;


    while(b!=0)
    {
        temp2= a;
        a = b;
        b = temp2% b;
    }
    return(a);
}

int GCD2(int a, int b){ // recursive
    int temp;


    if (b==0)
        return(a);
    else
    {
        return(GCD2(b, a%b));
    }
}

int main()
{
    int a,b;
    cout<< "Enter two numbers:";
    cin >> a>>b;
    cout << GCD2(a,b);

}