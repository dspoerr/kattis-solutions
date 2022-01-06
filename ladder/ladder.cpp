#include <iostream>
#include <cmath>


int main()
{
    double h, v, l;
    const double pi = 3.14159265358979323846;
    std::cin >> h >> v;

    l = h / sin(v*(pi/180));

    std::cout << (int)round(l+0.5);
}


