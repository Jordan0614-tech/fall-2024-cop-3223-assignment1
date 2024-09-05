//Jordan McClinton ID:5641109

#include <stdio.h>
#include<math.h>
#define PI 3.14159

// functions

double calculateDistance();
double calculatePerimeter(); 
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

int main( argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0; 
}

double calculateDistance() {
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();

    //distance calculated
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    //print out
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between these two points is %.2f\n", distance);

    return distance;
}

double calulatePerimeter() {
    // Use the perimeter to to get to the distance
    double distance = calculateDistance();
    double perimeter = 4 * distance;
//print out
printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

//return difficulty of code
return 2.0;
}

double calculateArea() {
    // area
    double distance = calculateDistance();
    double area = pow(distance, 2);

    //print out
    print("The area of the city encompassed by your request is %.2f\n", area);

    // level of difficulty
    return 5.0;
}
double calculateWidth() {
    //width get inputs
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();
    double width = fabs(x2 - x1);

    //print out
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);

    return 3.0;
}

//height
double calculateHeight() {
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();
    double height = fabs(y2 - y1);

    //print out 
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);

    return 4.0;
}

// attempts at bonus lol
double askForUserInput() {
    double value;
    printf("Please enter a value: ");
    scanf("%lf", &value);
    return value;
}