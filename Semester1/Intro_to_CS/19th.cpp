#include <iostream>
using namespace std;
// converting lowercase to upercase
int main()
{
    char s[10];
    int i;
    cout << "Enter a string: ";
    cin >> s;
    for(i=0; s[i]!='\0';i++)
    
        if('a'<= s[i]&& s[i]<='z') // Check if the current character is a lowercase letter
            s[i] = (s[i]-'a') + 'A';
    cout << s;
    
    return 0;
}