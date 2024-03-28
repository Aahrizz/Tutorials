#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstname, lastname;
    int yob;

    cout << "Input your firstname: ";
    cin >> firstname;
    cout << "Input your lastname: ";
    cin >> lastname;
    cout << "Input your year of birth: ";
    cin >> yob;

    cout << firstname << " " << lastname  << " " << yob << endl;
}