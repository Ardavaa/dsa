#include "rectangle.h"

int main() {
    double length = setLength(10.0);
    double width = setWidth(5.0);
    double luas = area(length, width);
    double keliling = perimeter(length, width);


    std::cout << "Luas Rectangle: " << luas<< std::endl;
    std::cout << "Keliling Rectangle: " << perimeter(length, width) << std::endl;

    return 0;
}
