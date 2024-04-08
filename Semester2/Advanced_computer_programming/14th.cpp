#include <iostream>
#include <cstring>
using namespace std;
// Reading n records of students and
//Sorts the array of pointers Ave in descending order based on their ave
struct student{
    int ID;
    float ave;
    char name[50];
};

void main()
{
    student Dept[100], *Ave[100], *temp;
    int i,j;
    for(i=0; i < 100 ; i++)
    {
        cin >> Dept[i].name >> Dept[i].ID >> Dept[i].ave;
        Ave[i] = &Dept[i];
    }


    for (i=99; i >0; i--)
        for(j=0; j<i; j++)
            if( Ave[j]->ave  < Ave[j+1]-> ave )
            {
                temp = Ave[j];
                Ave[j] = Ave[j+1];
                Ave[j+1] = temp;
            }

    for(i=0; i<100; i++)
        cout << Ave[i] ->ID << endl << Ave[i]->ave << endl << Ave[i] ->name;
}
