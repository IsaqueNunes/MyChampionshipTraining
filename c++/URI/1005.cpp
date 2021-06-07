#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    double a, b, c;
    cin >> a >> b;
    c = ((a * 3.5) + (b * 7.5)) / (7.5+3.5);
    cout << "MEDIA = " << fixed << setprecision(5) << c << endl;
    return 0;
}   