#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    string a;
    double b, c, d;
    cin >> a >> b >> c;
    d = b + ((c / 100) * 15);   
    cout << "TOTAL = R$ " << fixed << setprecision(2) << d << endl;
    return 0;
}