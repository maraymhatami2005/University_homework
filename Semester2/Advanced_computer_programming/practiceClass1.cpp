#include<iostream>
#define n 3
using namespace std;

class human{
    public:
        void assign(string Name, string Lastname, int Age, string Job);
        void print();


    private:
        string name;
        string lastname;
        int age;
        string job;
};

void human::assign(string Name, string Lastname, int Age, string Job)
{
    name = Name;
    lastname = Lastname;
    age = Age;
    job= Job;
}

void human::print()
{
    cout << "The applicants information"<< endl;
    cout << "Name: " << name << endl;
    cout << "Last Name: " << lastname<< endl;
    cout << "Age: " << age << endl;
    cout << "Job: " << job << endl;
    cout << endl;
}


int main()
{
    human info[n];
    int i, age;
    string name, lastname, job;
for (i =0; i <n; i++)
{
    cout << "Enter the applicant name" << endl;
    cin >> name;
    cout << "Enter the applicant last name" << endl;
    cin >> lastname;
    cout << "Enter the applicant age" << endl;
    cin >> age;
    cout << "Enter the applicant job" << endl;
    cin >> job;
    cout << endl;

    info[i].assign(name, lastname, age, job);
    
}
    for(i=0; i <n; i++)
    { 
        cout << "The " << i+1 << " applicant" << endl;
        info[i].print();
    }


}