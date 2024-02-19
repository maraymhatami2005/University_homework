#include<iostream>
using namespace std;
// check if the matrix is skew symmetric
// the entries of the matrix is only 1 or 0

int main()
{
    int x[5][5],i,j, flag = 1; // we assume that the matrix is already skew symmetric
    for(i=0; i<5; i++)
        for(j=0; j<5; j++)
            cout << "Enter a number:";
            cin >> x[i][j];

    for(i= 1; i<5 && flag ; i++)
        for(j=0; j<i; j++)
            if(x[i][j] + x[j][i] != 1)
            {
               flag = 0;
                break; 
            }
    if(flag ==1)
        cout << "The matrix is skew symmetric";
    else
        cout << "The matrix is not skew symmetric";
    
    return 0;
}
                