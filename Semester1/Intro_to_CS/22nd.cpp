#include <iostream>
using namespace std;

int main()
{
    int s[5]; 
    int i, x, n=0;  

    for(i=0; i <= 4; i++)
    {
            cout << "enter a number between 0 to 9: ";
            cin >> s[i];
    }
    
    
    for(i=0; i<=4; i++)
    {
    x = s[i];
    n = n *10 + x;
    }
    
    cout << n ;

    return 0;
    
}
