#include <iostream>
using namespace std;
// reading 3 numbers and checking if it is a right rectangular
int main() {
    float x, y, z, a, b, c;
    cout << "Enter 3 no."; 
    cin >> x >> y >> z;
    if(x >= y) {
        if(x >= z) {
            c = x; a = y; b = z;
        } else {
            c = z; a = x; b = y;
        }
    } else {
        if(y >= z) {
            c = y; a = x; b = z;
        } else {
            c = z; a = x; b = y;
        }
    }

    if(a*a + b*b == c*c)
        cout << "it is a right rectangular";
    else
        cout << "it is not a right rectangular";
    return 0;
} // end of main

/*
#include <iostream>
using namespace std;

int main()
{
float a,b,c;
cout << "enter 3 numbers:";
cin >> a>> b>> c;
if((a*a) + (b*b) == (c*c))
    cout << "it is";
else if ((a*a) + (c*c) == (b*b))
    cout << "it is";
else if ((b*b) + (c*c) == (a*a))
    cout << "it is";
else
    cout << "it is not";
}

*/