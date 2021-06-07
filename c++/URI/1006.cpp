#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double a, b, c, m;
    cin >> a >> b >> c;
    m = ((a * 2) + (b * 3) + (c * 5)) / (2 + 5 + 3);
    cout << "MEDIA = " << fixed << setprecision(1) << m << endl;
    return 0;
}