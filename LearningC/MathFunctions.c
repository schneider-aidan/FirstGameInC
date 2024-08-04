#include <stdio.h>
#include <math.h>


const double PI = 3.14159;

double circumference(double diameter);
double hypotenuse(double L1, double L2);

int main(){
    double radius;

    printf("Enter the radius of your circle: ");
    scanf("%lf", &radius);

    printf("The circumference is: %lf.\n", circumference(radius * 2));

    double leg1;
    printf("Enter leg 1 of your triangle: ");
    scanf("%lf", &leg1);

    double leg2;
    printf("Enter leg 2 of your triangle: ");
    scanf("%lf", &leg2);

    printf("The hypotenuse is: %lf.\n", hypotenuse(leg1, leg2));

}

double circumference(double diameter){
    return diameter * PI;
}

double hypotenuse(double L1, double L2){
    return sqrt(pow(L1,2) + pow(L2,2));
}