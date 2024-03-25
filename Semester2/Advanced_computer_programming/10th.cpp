#include<iostream>
using namespace std;
#define t 2
// A function that linearly searches the array x[] and returns the index if found, or -1 if not found

int search(float x[], int n, float k)
{
    int i; 
    for(i=0; i<n; i++)
        if (x[i] == k)
            return i;

    return -1;
}

int main()
{
    float a[10];
    int p,i;
    
    cout << "Enter 10 numbers:";
    for(i=0; i<10; i++)
        cin >> a[i];

    p = search(a, 10, t);
    
    if(p == -1)
        cout << "Not found";
    else
        cout << "Found in position: " << p;
}