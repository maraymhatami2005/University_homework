#include<iostream>
#include<cstring>
#define n 2
using namespace std;

// Reading n records of students and sorting them based on their IDs

struct student{
    char name[50];
    int ID;
};

student Read(){
    student x;
    cout << "Enter the name and ID";
    cin >> x.name >> x.ID;
    return(x);
}

void Print(student x){
    cout << x.name << "\t" << x.ID;
}

int Min(student x[], int l, int u){
    int indexMin = l, i;
    for(i = l+1; i <= u; i++)
        if(x[i].ID < x[indexMin].ID)
            indexMin = i;
    return(indexMin);
}

void Swap(student *a, student *b){
    student temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

void Sort(student x[], int k){
    int i, index;
    for(i=0; i<k-1; i++){
        index = Min(x, i, k-1);
        Swap(&x[i], &x[index]);
    }
}


int main(){
    int i;
    student Dept[n];
    for(i=0; i<n; i++)
        Dept[i] = Read();
    Sort(Dept, n);
    for(i=0; i<n; i++)
        Print(Dept[i]);
}