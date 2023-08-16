#include <stdio.h>
#include <stdlib.h>

int main()
{
    //area of circle
    float r;
    float pie=3.14;
    printf("Enter the radius of circle:");
    scanf("%f",&r);
    printf("The area of circle is:%f\n",pie*r*r);

    //Simple intrest
    int p;
    printf("Enter the amount u want:");
    scanf("%d",&p);
    int t;
    printf("Enter the number of day:");
    scanf("%d",&t);

    float itr=0.10*p;
    printf("Your final amount:%f\n",(p*itr*t)/100);

    //parameter of rectangle
    float a,b;
    printf("Enter the length of the rectangle:");
    scanf("%f",&a);
    printf("Enter the breath of the rectangle:");
    scanf("%f",&b);
    printf("Parameter of rectangle is:%f\n",2*(a+b));

    //area of rectangle
    float g,h;
    printf("Enter the length of the rectangle:");
    scanf("%f",&g);
    printf("Enter the breath of the rectangle:");
    scanf("%f",&h);
    printf("Area of rectangle is:%f",a*b);








}
