#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout << "enter a number: ";
    cin >> n;
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n+(i-1); j++)
            cout << j;
        cout << "\n";
    }
}