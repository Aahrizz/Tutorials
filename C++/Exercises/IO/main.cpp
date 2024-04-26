#include <iostream>
using namespace std;

int main() 
{
    int temp;
    double fh;
   

    cout << "Input temperature (in celcius): " << endl;
    cin >> temp;
     fh = (temp * 1.8) + 32;
    cout << fh << " degrees Farenheit" << endl;
    return 0;
}