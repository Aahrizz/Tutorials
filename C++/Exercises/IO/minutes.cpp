#include <iostream>
using namespace std;

int main() {
    int hours, minutes, h_minutes, total;
    cout << "Input hours: ";
    cin >> hours;
    cout << "Input minutes: ";
    cin >> minutes;
    h_minutes = hours * 60;
    total = h_minutes + minutes;

    cout << "Total " << total << endl;
    
    return 0 ;

}