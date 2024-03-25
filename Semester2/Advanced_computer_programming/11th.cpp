#include<iostream>
using namespace std;

// A function that binary searches the array x[] and returns the index if found, or -1 if not found

int BinarySearch(float x[], int n, float k)
{
    int low = 0, up = n-1, middle;
    while(low <= up)
    {
        middle = (low + up) / 2;
        if (x[middle] == k)
            return middle;
        if(x[middle] > k)
            up = middle -1;
        else
            low = middle +1;
    }
        return -1;
}