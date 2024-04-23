#include<iostream>
using namespace std;
// find the max index in an array using recursion

int Imax(float x[], int l, int u)
{
    if(l == u)
        return l;
    else
    {
        int m, I1, I2;
        m = (l+u)/2 ;
        I1 = Imax(x, l, m);
        I2 = Imax(x, m+1, u);
        
        if(x[I1] > x[I2])
            return I1;
        else
            return I2;
    }

}

int main()
{
    float a[10];
    int i;
    for(i = 0; i <10; i++)
    {
        cout << "Enter a number:";
        cin >> a[i];
    }
    cout << "Maximum is in index: " << endl;
    cout << Imax(a, 0, 9);
}
        

