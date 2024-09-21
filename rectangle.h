#include <iostream>

// set Length function
double setLength(double l) {
    if (l > 0) {
        return l;
    } else {
        return 1.0; // default value
    }
}

// set Width function
double setWidth(double w) {
    if (w > 0) {
        return w;
    } else {
        return 1.0; // default value
    }
}

// luas rectangle
double area(double length, double width) {
    return length * width;
}

// keliling rectangle
double perimeter(double length, double width) {
    return 2 * (length + width);
}
