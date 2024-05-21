#include<iostream>
using namespace std;
// static data type members in private

class ratio{
    
    public:
        ratio(int a=0, int b=1) : num(a), den(b)
        {
            cout << "\n" <<"An object born" << endl;
            count ++;
        }
        ~ratio()
        {
            cout <<"\n"<< "An object die" << endl;
            count--;
        }

        void assign(int a, int b)
        {
            num = a;
            den = b;
        }
        
       static float Numbers() {return count;}
       //This function returns the total number of ratio objects that have been created throughout the program’s execution1.


    private:
        int den;
        int num;
        static int count;

};
int ratio::count=0;




int main()
{
    ratio x, y(5), z(2,9);
    cout << x.Numbers() <<endl;
    {
        ratio x(7,5), a;
        cout << a.Numbers() << endl;
    }
    cout << ratio::Numbers() <<endl;
}