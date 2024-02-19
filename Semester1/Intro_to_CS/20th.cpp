#include <iostream>
using namespace std;
// converting upercase to lowercase
int main() {
    char s[10];  
    int i;

    cout << "Enter a string: ";
    cin >> s;  

    for (i = 0; s[i] != '\0'; i++)
    {
        
        if ('A' <= s[i] && s[i] <= 'Z') // Check if the current character is a lowercase letter
        {
            s[i] = (s[i] - 'A') + 'a';
        }
    }

    cout << s;  


    return 0;
    
}