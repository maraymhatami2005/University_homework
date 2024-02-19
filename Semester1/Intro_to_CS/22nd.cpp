#include <iostream>
using namespace std;

int main()
{
    char s[5]; 
    int i, x, n=0;  

    for(i=0; i <= 4; i++)
    {
            cout << "enter a number between 0 to 9: ";
            cin >> s[i];
    }
    
    
    for(i=0; i<=4; i++)
    {
        x = s[i] - '0';
        n = n *10 + x ;
    }
    
    cout << n ;

    return 0;
    
}
