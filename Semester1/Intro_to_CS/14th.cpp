#include<iostream>
using namespace std;
/*
print
    1
   121
  1234321
123454321
*/
int main()
{
    int i,j;
    for(i=1;i<=5; i++)
    {
        for(j=1; j<=5-i; j++)
            cout << " ";
        for(j=1; j<=i;j++)
            cout << j;
        for(j=i-1;j>=1; j--)
            cout << j;
        cout << "\n";
    }
}

