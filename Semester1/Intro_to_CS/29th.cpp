#include <iostream>
using namespace std;

// check if the matrix is symmetric

int main()
{
    float x[5][5]; //x[n][n]
    int i,j;
    string flag ="Y";// we assume that the matrix is already symmetric 

    for(i=0;i<5;i++)
        for(j = 0 ; j  < 5 ; j++)
        {
            cout << "enter a number: ";
            cin >> x[i][j];
        }

    for(i = 0; i<5;i++)
        for(j=0; j<5; j++)
            if(x[i][j]!= x[j][i])
                flag = 'N';

    if(flag == "Y")
        cout << " the matrix is symmetric";
    else
        cout << "the matrix is not symmetric";
     return 0;
}