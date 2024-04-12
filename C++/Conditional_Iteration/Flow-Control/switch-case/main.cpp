#include <iostream>
using namespace std;

int main() 
{
    int x = 3;
    int y = 4;

    switch (x)
    {
    case 1:
        cout << "X is greater than y\n";
        break;
    case 2:
        cout << "X is less tha Y\n";
        break;
    case 3:
        cout << "X and y are equal\n";
        break;
    default:
        cout << "I just learnt switch cases in cpp" <<endl;
    }
    return 0; 
}