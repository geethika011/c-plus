#include <iostream>
using namespace std;

class WashingMachine {
public:
    string brand;
    int capacity;
    bool isAutomatic;

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Capacity: " << capacity << " kg" << endl;
        cout << "Automatic: " << (isAutomatic ? "Yes" : "No") << endl;
    }
};

int main() {
    WashingMachine wm;
    wm.brand = "Samsung";
    wm.capacity = 7;
    wm.isAutomatic = true;
    wm.display();
    return 0;
}
