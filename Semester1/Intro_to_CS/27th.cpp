#include <iostream>
#include <cstring>
using namespace std;
//sorting names alphabetically 
int main()
{
    char s[10][20], temp[20]; //s[n]
    int i, indexMin, j;

    for(i=0; i<10; i++)
    {
        cout << "enter a name: ";
        cin >> s[i];
    }

    for(i=0; i<9; i++)// i< n-1
    {
        indexMin = i;

        for(j=i+1; j<10; j++)
        {
            if(strcmp(s[j ], s[indexMin]) < 0) //  f we want to Compare based on string length if(strlen(s[j]) < strlen(s[indexMin]))
            if(strlen(s[j]) < strlen(s[indexMin]))
                indexMin = j;
        }

        strcpy(temp , s[i]);
        strcpy(s[i] , s[indexMin]);
        strcpy(s[indexMin], temp);
    }
    for(i=0 ; i <10 ; i++)
        cout << s[i] << "\n";

    return 0;
}