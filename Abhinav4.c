#include <stdio.h>
#define PI 3.1416   // Defining constant value for π

int main() {
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("\nArea of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}