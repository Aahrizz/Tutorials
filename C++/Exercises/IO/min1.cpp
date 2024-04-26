#include <iostream>
using namespace std;

int main() {
    int hrs, min, mins;
    cout << "Input minutes: ";
    cin >> min;
    hrs = min / 60;
    mins = min % 60;

    cout << hrs <<" Hours, " << mins << " Minutes" << endl;


}