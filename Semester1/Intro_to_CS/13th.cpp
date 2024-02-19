#include <iostream>
using namespace std;
/*
print
1
22
333
4444
55555
*/

int main()
{
int i,j;
for(i=1; i<=5; i++)
    {
        for(j=1;j<=i;j++)
            cout << i;
        cout << "\n";
    }
} 