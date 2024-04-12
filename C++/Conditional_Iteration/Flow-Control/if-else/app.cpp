#include <iostream>
using namespace std;

int main ()
{
    int x = 8;
    int y = 8;

    if (x > y) {
        cout << "X is greater than y\n";
    }
    else if (x < y){
        cout << "X is less than y\n";
    }
    else {
        cout << "Both those numbers are equal\n";
    }
    
    return 0;
}