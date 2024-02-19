#include<iostream>
using namespace std;

/*
calculate S = 4(1/1 - 1/3 + 1/5 -...± 1/ 2n+1)
± is k

*/ 

float sum(int n){
    int i, k=1;
    float s = 0;
    for(i=1 ; i<= 2*n +1; i = i+2){
        s = s + (float) k /i;
        k = -k;
    }
    return (4 *s);
}

int main(){
    int  a;
    cout << "Enter a number:";
    cin >> a;
    
    cout << sum(a);
}