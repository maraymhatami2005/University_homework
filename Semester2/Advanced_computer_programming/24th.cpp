#include<iostream>
#include<cstring>
using namespace std;
// Tower of Hanoi problem using recursion

void Hanoi(int n, char src, char aux, char dest)
{
    if(n==1)
        {
        cout << "Move from " << src << " to " << dest <<endl;
        
        }
    else
    {
        Hanoi(n-1, src, dest, aux);
        cout << "Move from " << src << " to " << dest << endl;
        Hanoi(n-1, aux, src, dest);
    }
}

int main()
{
    Hanoi(3, 'a', 'b', 'c');
    return 0;
}