#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float km, miles;
    cout << "Input  kilometres per hour: ";
    cin >> km;
    miles = km / 1.609344;
    cout << miles << setprecision(6) << " miles per hour" << endl;
}