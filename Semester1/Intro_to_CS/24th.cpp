#include <iostream>
using namespace std;
// show the minimum of the numbers
int main()
{
    float x[10], min;
    int i, indexMin;
    for(i=0; i<10; i++)
    {
        cout << "Enter a number: ";
        cin >> x[i];
    }
    indexMin = 0;
    for(i=0; i<10; i++)
        if(x[i] > x[indexMin]) 
            indexMin = i;
    min = x[indexMin];
    cout << min;

/*
if we want to show the maximum of the numbers we should
change the term min to max, indexMin to indexMax and if(x[i] > x[indexMin])
*/ 
    return 0;
}