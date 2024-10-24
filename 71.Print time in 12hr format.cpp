#include <iostream>
#include <iomanip>
using namespace std;

void printTime(int hours, int minutes) {
    string period = (hours >= 12) ? "PM" : "AM";
    hours = (hours > 12) ? hours - 12 : (hours == 0 ? 12 : hours);
    cout << setw(2) << setfill('0') << hours << ":" 
         << setw(2) << setfill('0') << minutes << " " << period << endl;
}

int main() {
    int hours, minutes;
    cout << "Enter hours and minutes: ";
    cin >> hours >> minutes;
    printTime(hours, minutes);
    return 0;
}
