#include<iostream>
using namespace std;
// finding max and min in array and returning the values

int MaxMin(float x[], int n, int *index1, int *index2)
{
    int i;
    *index1 = 0;
    *index2 = 0;

    for(i=1; i<n ;  i++)
    {
        if(x[i] > x[*index1])
            *index1 = i; 
        
        else 
            if(x[i] < x[*index2])
                *index2 = i;
    }
    return 0;
}

int main()
{
    float a[10];
    int Imax, Imin,  i;
    for (i = 0; i<10; i++)
    {
        cout << "Enter a number: " <<endl;
        cin >> a[i];
    }
    MaxMin(a, 10, &Imax, &Imin);
        cout << Imax << endl;
        cout << Imin << endl;
}

