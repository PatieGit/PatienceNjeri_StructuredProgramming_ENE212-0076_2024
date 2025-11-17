#include <stdio.h>
#include <math.h>   // For mathematical constants and functions

int main() {
    double radius, surfaceArea;

    // Take radius as input
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    // Error checking (radius should not be negative or zero)
    if (radius <= 0) {
        printf("Error: Radius must be a positive number.\n");
        return 1;
    }

    // Calculate surface area: A = 4 * π * r^2
    surfaceArea = 4 * M_PI * pow(radius, 2);


    printf("The surface area of the sphere is: %.2lf\n", surfaceArea);

    return 0;
}
