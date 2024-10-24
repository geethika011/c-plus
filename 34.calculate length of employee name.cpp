#include <iostream>
using namespace std;

class Employee {
    string name;
    int age;

public:
    Employee(string n, int a) : name(n), age(a) {}

    int getNameLength() {
        return name.length();
    }
};

int main() {
    Employee emp("John Doe", 30);
    cout << "Length of employee's name: " << emp.getNameLength() << endl;
    return 0;
}
