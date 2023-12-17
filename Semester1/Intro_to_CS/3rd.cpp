#include <iostream>
using namespace std;
// reading the day of a week(d), working hours(t) and calculating the salary(s)
// saturday_0 and sunday_1 30 toman per hour
// monday_2 to wednesday_4 25 toman per hour
// thursday_5 and friday_6 45 toman per hour
int main() {
    float s,t;
    int d;
    cout << "Enter day and time";
    cin >>d >>t;
    switch(d){
        case 0:
        case 1: s= 30 * t;
            break;
        case 2:
        case 3:
        case 4: s= 25 * t;
            break;
        case 5:
        case 6: s= 45 *t;
            break;
    default: cout << "Erorr in day";
    }
cout << s;
return 0;
}