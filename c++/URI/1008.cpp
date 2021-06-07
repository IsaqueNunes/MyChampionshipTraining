#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a, b;
    float c;
    cin >> a >> b >> c;
    cout << "NUMBER = U$" << a << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << c * b << endl;
    return 0;
}