#include <iostream>
using namespace std;

int main() 
{
    char n = '4';
    long a = 45347;
    long long b = 4233e4;
    int c = 32;
    float d = 89.33;
    double e = d;
    bool f = false;



 
    cout << "The sizeof(char) is: " << sizeof(n) << "bytes" <<endl;
    cout << "The sizeof(long) is: " << sizeof(a) << "bytes" <<endl;
    cout << "The sizeof(long long) is: " << sizeof(b) << "bytes" <<endl;
    cout << "The sizeof(int) is: " << sizeof(c) << "bytes" <<endl;
    cout << "The sizeof(float) is: " << sizeof(d) << "bytes" <<endl;
    cout << "The sizeof(double) is: " << sizeof(e) << "bytes" <<endl;
    cout << "The sizeof(bool) is: " << sizeof(f) << "bytes" <<endl; 
}