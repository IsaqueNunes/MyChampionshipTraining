#include <iostream>
#include <iomanip>
using namespace std;
#define pi 3.14159
int main(){
    double a, r;
    cin >> r;
    a = pi * r*r;
    cout << "A=" << fixed << setprecision(4) << a << endl;
    return 0;
}