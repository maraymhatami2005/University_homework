#include<iostream>
using namespace std;
// This function takes 'n' as the number of characters used in a text and calculates the cost of the SMS based on the formula below:
// For the first 20 characters: 100 RIAL
// For every 5 extra characters: add 40 RIAL

int cost(int n)
{
    float s;
    if(n<= 0)
    {
        cout << "Error.";
        return(0);
    }

    s = 100 + ((n-20)/5) * 40;

    if (((n - 20) % 5) != 0)
        s = s + 40;

    cout << "Cost = " << s << "\n";
    
    return(0);

}

int main()
{
    int x;
    cout << "Enter the number of characters used in text: ";
    cin >> x;
    cout << cost(x);

}