#include <stdio.h>

int main(){


    const double PI = 3.14159;
    double radius;
    double area;
    double circumference;
    double diameter;

    printf("\nEnter radius of a circle: \n");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    diameter = 2 * radius;

    printf("\nThe Circumference of the circle is: %.2lf\n", circumference);
    printf("The Area of the circle is: %.2lf inches\n", area);
    printf("The Diameter of the circle is: %.2lf\n\n", diameter);

    return 0;
}