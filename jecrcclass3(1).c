#include <stdio.h>
#include <stdlib.h>

int main()
{


    //Temperature conversion
    int d;
    printf("Enter the temp. in deg. C:");
    scanf("%d",&d);
    printf("Temp in farantie:%d\n",(1.8*d)+32);

    //add 5 subject marks find sum and average

    float sub1,sub2,sub3,sub4,sub5;
    printf("Enter the marks of sub1:");
    scanf("%f",&sub1);
    printf("Enter the marks of sub2:");
    scanf("%f",&sub2);
    printf("Enter the marks of sub3:");
    scanf("%f",&sub3);
    printf("Enter the marks of sub4:");
    scanf("%f",&sub4);
    printf("Enter the marks of sub5:");
    scanf("%f",&sub5);
    printf("The sum of all 5 sub is:%f\n",sub1+sub2+sub3+sub4+sub5);
    printf("The average of all 5 sub is:%f\n ",(sub1+sub2+sub3+sub4+sub5)/5);










}
