#include<iostream>
using namespace std;
// calculating the inner product of two vector


float inner_product (float a[], float b[], int n)
{
    int i; 
    float sum = 0;
    for(i=0; i<n; i++)
        sum = sum + a[i] * b[i];
    return (sum);

}

int main()
{
    float x[10], y[10] ,t;
    int i;
    for(i=0; i<10; i++)
        cin >> x[i];
    
    for(i=0; i<10; i++)
        cin >> y[i];
    
    cout << "x .y = " << "\n" << inner_product(x, y, 10);

    return 0;
}