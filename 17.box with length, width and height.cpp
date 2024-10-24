#include <iostream>
using namespace std;

class Box {
    public:
        double length, width, height;

        Box(double l, double w, double h) : length(l), width(w), height(h) {}

        double volume() {
            return length * width * height;
        }
};

int main() {
    Box box(2.5, 3.0, 4.5);
    cout << "Volume of the box: " << box.volume();
    return 0;
}
