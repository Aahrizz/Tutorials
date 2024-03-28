#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double volume, radius;
    //float height;

    cout << "Enter the radius of the sphere: " << endl;
    cin >> radius;
    volume = (M_PI * radius) * 4/3;
    cout << "The volume of sphere is " << volume << endl;
    
}