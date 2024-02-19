#include <iostream>
using namespace std;
// reading 3 numbers and checking for triangular inequality
int main() {
    float a,b,c;
    cout << "ENter 3 numbers";
    cin >> a >> b >> c;
    if((a+b > c) && (b+c > a))
    cout << "True";
    else
    cout << "False";
    return 0;
}