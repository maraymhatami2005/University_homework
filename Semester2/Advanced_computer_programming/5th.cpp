#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    int z;
    if(a < b)
    {
        z = a;
        a = b;
        b = z;
    }
   while(a != b)
    {
        z = a - b;
        if (z < b)
        {
            a = b;
            b = z;
        }
        else
        {
            a = z;
            b = b;
        
        }
    }

    return(a);
}

    // or
    //  The BMM function uses the modulo (remainder) method.
    int BMM(int a, int b)
    {
        int z;

        while(b != 0)
        {
            z = a;
            a = b;
            b = z%b;

        }
        return(a);

    }

    int main()
    {
        int x, y;
        cout << "Enter 2 numbers:";
        cin >> x >>y ;
        cout << GCD(x,y) << endl;
        cout << BMM(x, y) << endl;
    }