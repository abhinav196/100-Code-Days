#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a == 0) {
        printf("Not a quadratic equation.\n");
        return 0;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
    } 
    else if (discriminant == 0) {
        // Real and equal roots
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal: %.2f and %.2f\n", root1, root2);
    } 
    else {
        // Complex roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are imaginary: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}