#include <iostream>
using namespace std;
// finding max and min among 100 numbers
int main()
{
    float x, max, min;
    int i;
    cout << "Enter a number";
    cin >> x;
    max = x;
    min = x;
    for(i=2; i<= 10; i++)
    {
        cin >> x;
        if(x > max)
            max = x;
        else if (x < min)
            min = x;
    }
    cout << max <<" " << min;
    return 0;
}