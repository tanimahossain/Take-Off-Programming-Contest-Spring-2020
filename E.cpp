#include <math.h>
#include <stdio.h>

const double pi = 3.14159;

double triangle(double a) {
    return sqrt(3.0) * a * a / 4.0;
}

double circumradius(double a) {
    return (sqrt(3.0) * a / 3.0);
}

double circle(double radius) {
    return pi * radius * radius;
}

int main() {
    long long a;
    while (scanf("%lld", &a) == 1) {
        double allhalfcircles = 3.0 * circle(a / 2.0) / 2.0;
        double circumcircle = circle(circumradius(a));

        double ans = triangle(a) + allhalfcircles - circumcircle;

        printf("%.10lf\n", ans);
    }

    return 0;
}
