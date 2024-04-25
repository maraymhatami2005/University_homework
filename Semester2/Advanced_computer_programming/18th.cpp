#include<iostream>
using namespace std;
//Binary search sorted array of A

int BubbleSort(float A[], int n)
{
    int i, j;
    float temp;

    for(i=0; i<n; i++)
    {

        for(j=0; j<n-i-1; j++)
        {

            if (A[j] > A[j+1])
            {
                temp = A[j];
                A[j]= A[j+1];
                A[j+1] = temp;
            }
        }
    }
return 0;
}

int Find(float  A[], int l, int u, float x)
{

    int m = (l+u) / 2;

    if (l>u)
        return(-1);

    if (x == A[m])
        return(m);
    
    if(x > A[m])
        return(Find(A, m+1, u, x));

    else 
        return(Find(A, l, m-1,x));

    
}

int main(){
    float T[10];
    int index, i;
    for(i=0; i<10; i++)
    {
        cout << "Enter a number" << endl;
        cin >> T[i];
    }

    BubbleSort(T,10);
    index = Find(T,0, 9, 4);

    if(index == -1)
        cout << "Not found" << endl;
    else
        cout << "Found in: " << index << endl;
}