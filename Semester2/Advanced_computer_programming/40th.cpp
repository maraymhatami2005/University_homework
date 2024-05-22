#include<iostream>
using namespace std;
// Matrix class

class matrix{

    public:
        matrix(float a=1, float b=0, float c = 0, float d = 1)
        {
            x[0][0] = a;
            x[0][1] = b;
            x[1][0] = c;
            x[1][1] = d;
            Det = a*d - b*c;
        }
matrix(const matrix &y)
{
            x[0][0] = y.x[0][0];
            x[0][1] = y.x[0][1];
            x[1][0] = y.x[1][0];
            x[1][1] = y.x[1][1];
            Det = y.Det;
}

        void print();
        void assign(float a, float b, float c, float d);
        int HaveInverse();
        void Inverse();
        float D(){return Det;}

    private:

        float x[2][2], Det;

};

void matrix::print()
{
    cout << '\n' << x[0][0] << "   " << x[0][1] << endl;
    cout << x[1][0] << "   " << x[1][1] << endl;
}
void matrix::assign(float a, float b, float c, float d)
{
        x[0][0] = a;
        x[0][1] = b;
        x[1][0] = c;
        x[1][1] = d;
        Det = a*d - b*c;
}
int matrix::HaveInverse()
{
    if (Det != 0)
        return 1;
    else 
        return 0;
}

void matrix::Inverse()
{
    float a, b, c, d;
    a = x[0][0];
    b = x[0][1];
    c = x[1][0];
    d = x[1][1];
    if (Det != 0)
    {
        x[0][0] = d/Det;
        x[0][1] = -b/Det;
        x[1][0] = -c/Det;
        x[1][1] = a/Det;
        //Det = x[0][0]*x[1][1] - x[0][1]*x[1][0];
    }
}

int main()
{
    matrix I,A(2,3,-1,4);
    I.print();
    A.assign(1,5,3,-1);
    cout << "|A| = " << A.D() <<endl;

    if(A.HaveInverse() == 1)
    {
        cout << "The Matrix is reversible" << endl;
        matrix A_1(A);
        A_1.Inverse();
        A_1.print();
    }
}