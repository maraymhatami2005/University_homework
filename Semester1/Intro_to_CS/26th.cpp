#include <iostream>
using namespace std;
//sorting numbers
int main()
{
    float x[10],temp;
    int i, indexMin, j;

    for(i=0; i<10; i++)
    {
        cout << "enter a number: ";
        cin >> x[i];
    }

    for(i=0; i<9; i++) // i < n-1
    {   indexMin =i;
        for(j=i+1; j < 10; j++) // j<n
        {
        if(x[j]< x[indexMin])
            indexMin = j;
        }
        temp = x[i];
        x[i] = x[indexMin];
        x[indexMin] = temp;
    }

    for (i = 0; i < 10; i++)
    
        cout << x[i] << " ";
    
    return 0;
    
}