#include <iostream>
using namespace std;
// checking if number n is prime number or not

int main()
{
    int n, i;
    char flag='y'; // first initial assumption is that  the number of n is a prime number
    cout << "Enter a number";
    cin >> n;
    if(n%2 == 0)
        flag = 'n';
    else{
        for(i=3;i<=n/2;i=i+2)
        {
            if(n%i==0)
            {
                flag = 'n';
                break;
            }
        }
    }
    if(flag == 'y')
        cout << "it is a prime number";
    else
        cout << "it is not a prime number";
        return(0);
}