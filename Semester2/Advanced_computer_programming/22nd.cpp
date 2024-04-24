#include<iostream>
using namespace std;
// Merge sort

void Merge(float x[], int l, int m, int u);
void MergeSort(float x[], int l, int u);

void MergeSort(float x[], int l, int u)
{
    int m = (l+u) /2;
    if(l >= u)
        return ;
    else 
        {
            MergeSort(x, l, m);
            MergeSort(x, m+1, u);
            Merge(x, l, m, u);
        }
        
}

void Merge(float x[], int l, int m, int u)
{
    float *z; // y[1000], instead of y we can have a dynamic memory z
    int i = l, j = m+1, k = 0;
    z = new float[u-l+1];

    while(i<= m && j <= u)
    {
        if(x[i] <= x[j])
        {
            //y[k] = x[i];
            *(z+k) = x[i];
            i++;
            k++;
        }

        else
        {
            //y[k] = x[j];
            *(z+k) = x[j];
            j++;
            k++;
        }

    
    }

    while(i<=m)
    {
        //y[k] = x[i];
        *(z+k) = x[i];
        i++;
        k++;
    }

    while(j<=u)
    {
        //y[k] = x[j];
        *(z+k) = x[j];
        j++;
        k++;
    }
    i =l, k =0;
    while(i<=u)
    {
        x[i] = *(z+k);//x[i] = y[k]
        i++;
        k++;
    }

   delete[] z;
   
} //end of merge

int main()
{
    int i;
    float a[10];
    for(i= 0; i<10; i++)
    {
        cout << "Enter a number: ";
        cin >> a[i];
    }

    MergeSort(a, 0,9);
    for(i=0 ; i<10; i++)
        cout << a[i] << endl;
}