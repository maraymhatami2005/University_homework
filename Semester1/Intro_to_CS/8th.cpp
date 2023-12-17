#include <iostream>
using namespace std;
// finding max among 100 numbers
int main(){
    float x, max;
    int i;
    cout << "Enter a number";
    cin >> max;
    for(i=2; i<= 10; i++){
        cin >> x;
        if(x > max)
        max= x;
    }
    cout << max;
    return 0;
}