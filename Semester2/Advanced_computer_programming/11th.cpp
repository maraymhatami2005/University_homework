#include<iostream>
#define t 4
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

int BubbleSort(float x[], int n)
{
    int i, j;
    float temp;

    for(i=0; i<n; i++)
    {

        for(j=0; j<n-i-1; j++)
        {

            if (x[j] > x[j+1])
            {
                temp = x[j];
                x[j]= x[j+1];
                x[j+1] = temp;
            }
        }
    }
return 0;
}

int main()
{
    float a[10];
    int p,i;
    
    cout << "Enter 10 numbers:";
    for(i=0; i<10; i++)
        cin >> a[i];

    BubbleSort(a,10);

    p = BinarySearch(a, 10, t);
    
    if(p == -1)
        cout << "Not found";
    else
        cout << "Found in position: " << p;
}