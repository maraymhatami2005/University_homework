#include <iostream>
using namespace std;

// calculating the sum of main diagonal of a square matrix and secondary diagonal of a square matrix

int main()
{
    float x[5][5], sum1 = 0, sum2 = 0; //x[n][n]
    int i,j;

    for(i=0;i<5;i++)
        for(j = 0 ; j  < 5 ; j++)
        {
            cout << "enter a number: ";
            cin >> x[i][j];
        }

    for(i = 0 ; i < 5 ; i++) // i<n
    {
        sum1 = sum1 + x[i][i];
        sum2 = sum2 + x[i][4-i]; // x[i][5-i-1]
    }
    cout << "sum of the main diagonal: "<< sum1 << "\n";
    cout<< "sum of the decondary diagonal: "<< sum2;

    return 0;

}