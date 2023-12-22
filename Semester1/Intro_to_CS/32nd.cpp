#include <iostream>
using namespace std;
// checking if the matrix is transitive

int main ()
{
    int x[5][5], i, j, k, flag = 1; // we assume the matrix is already transitive
    for(i=0; i < 5; i++)
        for(j=0; j < 5; j++)
            {
                cout << "Enter a number:";
                cin >> x[i][j];
            }
    for(i=0; i < 5 && flag; i++)
        for(j=0; j < 5 && flag; j++)
            for(k=0; k < 5 && flag; k++)
                if(x[i][j] == 1 && x[j][k] == 1 && x[i][k] == 0)
                    flag = 0;
    
    if(flag == 1)
        cout << "The matrix is transitive";
    else
        cout << "The matrix is not transitive";
    
    return 0;
}