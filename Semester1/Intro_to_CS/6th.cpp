#include <iostream>
using namespace std;
// reading 20 numbers and calculating average of positive numbers, numbers of zeros and multiplication of negative numbers
int main(){
    float x, ave_p, sum_p = 0, mul_n=1;
    int i, count_p=0, count_z=0;
    for(i=0;i<=10;i++){
        cout << "enter a number";
        cin >> x;
        if(x > 0){
            sum_p = sum_p + x;
            count_p++;
        }
        else if (x ==0)
        count_z++;
            else
            mul_n = mul_n*x;
    }
    if(count_p > 0)
        ave_p = sum_p / count_p;
    cout <<ave_p <<"\t" <<count_z << "\t"<<mul_n;
    return 0;
}