#include <iostream>
using namespace std;
// check if the matrix is reflexive
// the entries of the matrix is only 1 or 0
int main()
{
    float x[5][5]; //x[n][n]
    int i,j;
    string flag ="Y";

    for(i=0;i<5;i++)
        for(j = 0 ; j  < 5 ; j++)
        {
            cout << "enter a number: ";
            cin >> x[i][j];
        }

        for(i=0; i<5; i++)
            if(x[i][i]!= 1)
                flag = 'N';

    if(flag == "Y")
        cout << " the matrix is reflexive.";
    else
        cout << "the matrix is reflexive.";
     return 0;
}