#include<iostream>
using namespace std;
// stack class

class stack{

    public:
        stack(int size = 1000):
            MaxSize(size){
                top = -1;
                S = new(int[size]);
            }

    ~stack()
    {
        delete []S;
    }

            int IsFull(){
                if(top == MaxSize-1)
                    return(1); // stack is full
                else
                    return(0);
            }

        int IsEmpty()
        {
            if(top == -1)
                return(1);
            else
                return(0);
        }

        void AddS(int k)
        {
            if(top < MaxSize -1)
            { // stack is not empty
                top ++;
                *(S + top) = k;
            }
            else
                cout << "Stack is full";
        }

        int DelS1()
        {
            top --;
            return(*(S+top+1));
        }

        int DelS2(int *k)
        {
            if(top == -1)
                return 0; // there is nothing to delete
            else
                *k = *(S + top);
                top --;
                return 1;
        }

    private:

    int top, MaxSize, *S;

};

void main()
{
    stack A,B(10); 
    int k;
    if(A.IsEmpty() == 0)
        cout << "A is empty" << endl;
    B.AddS(23);
    B.AddS(-9);
    cout << "Enter a number" << endl;
    cin >> k;
    B.AddS(k);

    if(B.IsFull()!=1)
        B.AddS(37);
    
    if(B.IsEmpty()==0)
    {
        k = B.DelS1();
        cout << k << endl;
    }
    if (A.DelS2(&k)==1)
        cout << k;
}