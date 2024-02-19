#include <iostream>
#include <cstring>
using namespace std;
// looking for the name "mary"
int main()
{
    char s[10][20];
    int i, index;

    for(i=0; i < 10; i++)
    {
        cout << "enter a name: ";
        cin >> s[i];
    }
    index = -1; // we assume we don't have the name "mary"
    for(i=0; i<20; i++)
        if(strcmp(s[i], "mary")==0) // the output is either 0 or -1(the name we are looking for doesn't exist), if it was 0 change the index to i
        {
            index = i;
            break;
        }
        if(index == -1)
            cout << "Not found";
        else
            cout << "Found in "<<i<<"th row";
            
    return 0;

}