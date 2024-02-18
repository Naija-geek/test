//Write a menu-driven C program that computes the area of the following quadrilaterals: Rectangle square, trapezium. Your program should allow the user to select a plain shape from the list, accept the parameters and then print the area.
#include <stdio.h>
#include <math.h>

// Function prototypes
double getRectangleArea(double length, double width);
double getSquareArea(double side);
double getTrapeziumArea(double base1, double height1, double base2, double height2);

int main() {
    int choice;
    double length, width, side, base1, height1, base2, height2;

    do {
        printf("Enter your choice:\n");
        printf("1. Rectangle\n");
        printf("2. Square\n");
        printf("3. Trapezium\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter the length and width of the rectangle: ");
            scanf("%lf %lf", &length, &width);
            printf("The area of the rectangle is: %lf", getRectangleArea(length, width));
            break;
        case 2:
            printf("Enter the side of the square: ");
            scanf("%lf", &side);
            printf("The area of the square is: %lf", getSquareArea(side));
            break;
        case 3:
            printf("Enter the lengths of the two bases and the heights of the two sides of the trapezium: ");
            scanf("%lf %lf %lf %lf", &base1, &height1, &base2, &height2);
            printf("The area of the trapezium is: %lf", getTrapeziumArea(base1, height1, base2, height2));
            break;
        case 4:
            printf("Goodbye!");
            break;
        default:
            printf("Invalid choice. Please try again.");
        }
    } while (choice != 4);

    return 0;
}

double getRectangleArea(double length, double width) {
    return length * width;
}

double getSquareArea(double side) {
    return side * side;
}

double getTrapeziumArea(double base1, double height1, double base2, double height2) {
    double area1, area2;

    if (base1 + base2 > height1 + height2) {
        area1 = (base1 + base2) * height1 / 2.0;
        area2 = base1 * height2;
    } else {
        area1 = base1 * height1;
        area2 = (base2 + height2) * height1 / 2.0;
    }

    return area1 + area2;
}