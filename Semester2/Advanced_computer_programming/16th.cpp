#include<iostream>
using namespace std;
// recursive vs non-recursive function fibonacci sequence

int fibo1(int n){ // non-recursive
    int a=1, b=1, c, i;
    for(i=3; i<=n; i++)
    {
        c = a+b;
        a=b;
        b = c;
    }
    return(c);
}


int fibo2(int n){ // recursive
    if(n<= 2)
        return(1);
    else
        return(fibo2(n-1) + fibo2(n-2));
}

int main(){
    int n;
    cout << "Enter a number";
    cin >> n;
    cout << fibo2(n);

}