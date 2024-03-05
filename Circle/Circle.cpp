// Program Description:
// This program interacts with the user to calculate the radius, circumference, and area of a circle
// based on the coordinates of its center point and a point on its circumference. It prompts the user
// to input the x and y coordinates of the center point and a point on the circumference.
// The program then calculates the distance between these two points, which serves as the radius of the circle.
// Using the radius, it calculates the circumference and area of the circle.
// The circumference is calculated using the formula 2 * π * radius, and the area is calculated using the formula π * radius^2.
// The program finally outputs the calculated radius, circumference, and area of the circle.
// Note-I could not get m pi to work on my computer for whatever reason
#include <iostream>
#include <cmath>

using namespace std;

double calcDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double calcRadius(double x1, double y1, double x2, double y2) {
    return calcDistance(x1, y1, x2, y2);
}

double calcCircumference(double radius) {
    return 2 * 3.14159265358979323846 * radius;
}

double calcArea(double radius) {
    return 3.14159265358979323846 * pow(radius, 2);
}

int main() {
    double x1, y1, x2, y2;

    cout << "Enter the x-coordinate of the center point: ";
    cin >> x1;
    cout << "Enter the y-coordinate of the center point: ";
    cin >> y1;

    cout << "Enter the x-coordinate of a point on the circumference: ";
    cin >> x2;
    cout << "Enter the y-coordinate of a point on the circumference: ";
    cin >> y2;

    double radius = calcRadius(x1, y1, x2, y2);
    double circumference = calcCircumference(radius);
    double area = calcArea(radius);

    cout << "Radius of the circle: " << radius << endl;
    cout << "Circumference of the circle: " << circumference << endl;
    cout << "Area of the circle: " << area << endl;

    return 0;
}
