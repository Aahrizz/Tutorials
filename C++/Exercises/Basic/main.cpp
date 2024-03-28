#include <iostream>
using namespace std;

int main()
{
    /* code */
    //program to print a welcome text in a separate line
    cout << "Welcome Mr <insert name>. We are glad you are here" <<endl;

    //program to print sum of two numbers
    int a, b, sum; 
    
    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " <<endl;
    cin >> b;

    sum = a + b;

    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;

    return 0;
}
