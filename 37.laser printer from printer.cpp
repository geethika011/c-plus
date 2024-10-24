#include <iostream>
using namespace std;

class Printer {
public:
    virtual void print() {
        cout << "Printing from base Printer class." << endl;
    }
};

class LaserPrinter : public Printer {
public:
    void print() override {
        cout << "Printing from derived LaserPrinter class." << endl;
    }
};

int main() {
    LaserPrinter lp;
    lp.print();
    return 0;
}
