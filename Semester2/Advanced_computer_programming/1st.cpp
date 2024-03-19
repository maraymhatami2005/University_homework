#include<iostream>
#include<cmath>
using namespace std;
// the distance between a point and the coordinate origin 

float f(int a, int b, int c){
    float z;
    z = sqrt( a*a + b*b + c*c);
    return z;
}
int main(){
    int a, x, q;
    cout << "enter 3 numbers:";
    cin >> a >> x>> q;
    
    cout << f(a, x, q);
}