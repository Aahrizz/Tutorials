#include <iostream>
#include <iomanip>
using namespace std;


int main () 
{
    int l, w;
    float p;

    cout << "Input the length of the Rectangle ";
    cin >> l;
    cout << "Input the width of the rectangle ";
    cin >> w;
    p = 2 * (l + w);
    cout << fixed << setprecision(4) << "Perimeter of the Rectangle is: " << p << endl;
}