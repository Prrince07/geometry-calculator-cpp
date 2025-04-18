#include <iostream>
using namespace std;

void calculate(int length, int breadth, int radius, double pie) {
    int area = length * breadth;
    double circumference = 2 * pie * radius;

    cout << "Area of rectangle: " << area << "\n";
    cout << "Circumference of circle: " << circumference << "\n";
}

int main() {
    int length, breadth, radius;
    double pie;

    cout << "Enter length, breadth, pie, and radius:\n";
    cin >> length >> breadth >> pie >> radius;

    calculate(length, breadth, radius, pie);

    return 0;
}
