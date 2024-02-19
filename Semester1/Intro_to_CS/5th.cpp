#include <iostream>
using namespace std;
// reading some amount of number until receiving a negative number and calculating the average
int main(){
float x, sum=0, ave=0;
int count;
for(count=0;;count++){
    cout << "enter a number";
    cin >> x;
    if(x<0)
        break;
    sum= sum + x;
}
if(count > 0){
ave= sum / count;
cout << ave;
}
else
    cout << "Not valid";
    return 0;
}