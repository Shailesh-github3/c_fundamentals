#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, discriminant, root1, root2;
    // Input coefficients of the quadratic equation
    scanf("%f %f %f", &a, &b, &c);
    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;
    // Switch case to handle different discriminant conditions
    switch (discriminant > 0) {
        case 1:
            // Two real and distinct roots
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Two distinct and real roots exists: %.2f and %.2f\n", root1, root2);
            break;
        case 0:
            switch (discriminant == 0) {
                case 1:
                    // One real root
                    root1 = -b / (2 * a);
                    printf("One real root: %.2f\n", root1);
                    break;
                case 0:
                    // No real roots
                    printf("No real roots\n");
                    break;
            }
            break;
    }
    return 0;
}
