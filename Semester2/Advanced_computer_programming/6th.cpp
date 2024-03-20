#include <iostream>
#include <cstring>
#define n 3
using namespace std;

struct student
{
    char name[30];
    int ID;
    float NO[10], ave;

};

student Read()
{
    int i;
    float sum = 0, ave ;
    student x;

    cout << "Enter the name of the student";
    cin >> x.name;

    cout << "Enter the ID of the student";
    cin >> x.ID;

    cout << "Enter the student's marks";
    for(i=0; i<10; i++)
    {
        cin >> x.NO[i];
        sum = sum + x.NO[i];
    }

    x.ave = sum / 10;

    return(x);
}

int main()
{
    student Dept[n];
    int i;

    for(i=0; i<n ; i++)
    Dept[i] =  Read();

    return 0;
}