#include <cstdio>
#include <iostream>
#include <cmath>
#include <cerrno>
#include <cfenv>
#include <cstring>

int main()
{
    std::puts("please enter a and b for 'ax^2 + bx + c = 0' :");
    float a = 0;
    float b = 0;
    float c = 0;
    std::scanf("%f %f %f", &a, &b, &c);

    float disc = b * b - 4 * a * c;
    if (disc < 0)
    {
        std::printf("where are no valid solutions");
    }
    else if (disc == 0)
    {
        float x = 0;
        x = -1 * b / (2 * a);
        std::printf("solution: x = %f\n", x);
    }
    else
    {
        float x1 = 0;
        float x2 = 0;
        x2 = (-1 * b + std::sqrt(disc)) / (2 * a);
        x1 = (-1 * b - std::sqrt(disc)) / (2 * a);
        std::printf("solution: x1 = %f, x2 = %f\n", x1, x2);
    }
}