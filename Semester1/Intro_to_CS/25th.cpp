#include <iostream>
#include <cstring>
using namespace std;
// show the minimum of the names
int main()
{
    char s[10][25], min[25];
    int i, indexMin;

    for(i=0; i < 10; i++)
    {
        cout << "enter a name: ";
        cin >> s[i];
    }
    indexMin = 0;
    for(i=0; i < 10; i++)

        if(strcmp(s[i] , s[indexMin]) < 0 )
            indexMin = i;

    strcpy(min,s[indexMin]);
    cout << min;
    /*
    if we want to show the maximum of the names we should
    change the term min to max, indexMin to indexMax and if(strcmp(s[i] , s[indexMin]) > 0 )
    */ 
   
    return 0;
}