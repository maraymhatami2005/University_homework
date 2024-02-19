#include <iostream>
using namespace std;
// calculating matrix C = A * B
#define m  2
#define p  3
#define n  5

int main()
{
    int i, j, k, A[m][n], B[n][p], C[m][p];
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
        {
            cout << "Enter a number: ";
            cin >> A[i][j];
        }

    for(i=0; i<n; i++)
        for(j=0; j<p; j++)
        {
            cout << "Enter a number: ";
            cin >> B[i][j];
        }

     for(i=0; i<m; i++)
        for(j=0; j<p; j++)
        {
            C[i][j] = 0;
            for(k=0; k<n; k++)
                C[i][j] = C[i][j] + (A[i][j] * B[k][j]);
        }
    return 0;
}