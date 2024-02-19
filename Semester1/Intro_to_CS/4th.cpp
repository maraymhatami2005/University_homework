#include <iostream>
using namespace std;
// reading 10 numbers and calculating the average
int main(){
    float x, sum = 0, ave;
    int i;
    for(i=1;i<=10;i++){
        cout << "enter a number";
        cin >> x;
        sum = sum + x;
    }
    ave = sum / 10;
    cout << "\n" << ave;
    return 0;
}