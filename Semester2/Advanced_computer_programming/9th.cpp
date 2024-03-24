#include<iostream>
using namespace std;
// Bubble sort 

int BubbleSort(float x[], int n)
{
    int i, j;
    float temp;

    for(i=0; i<n; i++)
    {

        for(j=0; j<n-i-1; j++)
        {

            if (x[j] < x[j+1])
            {
                temp = x[j];
                x[j]= x[j+1];
                x[j+1] = temp;
            }
        }
    }
return 0;
}
// or

int BS(float x[], int n) {
    int i, j;
    float temp;

    for (i = n - 1; i >= 0; i--) {
        for (j = 0; j < i; j++) {
            if (x[j] > x[j + 1]) {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
return 0;
}

int main()
{
    float x[10];
    int i;
    cout << "Enter 10 numbers:";
    for(i=0; i<10; i++)
        cin >> x[i];
    BS(x, 10);

    cout << "Sorted array: ";
    for(i = 0; i<10; i++)
        cout<< x[i] << " ";

    return 0;
}

