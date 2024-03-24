#include<iostream>
using namespace std;

// A function that finds the index of the minimum element 
//in a given range [low, up] of an array x[]


int Min(float x[], int low, int up){
    int i, indexMin = low;
    for(i = low+1; i<= up; i++)
        if(x[i] < x[indexMin])
            indexMin = i;
    
    return(indexMin);
}

// A function that sorts the array x[] in ascending order

int Sort(float x[], int n){
    int i, index;
    float temp;
    for(i=0; i<n; i++)
    {
        index = Min(x, i, n-1);

        temp = x[i];
        x[i] = x[index];
        x[index] = temp;

    }
return 0;
}

int main()
{
    int i;
    float x[50], a[20];

    for(i=0 ; i<10 ; i++)
         cin >> x[i];

    for(i=0; i<10; i++)
        cin >> a[i];

    Sort(x,10);
    Sort(a, 10);

    cout << "Sorted array x:";
    for(i=0; i<10; i++)
        cout << x[i] << " ";


    cout<< "Sorted array a:";
    for(i=0; i<10; i++)
        cout << a[i] << " ";

    
    return 0;
    
}