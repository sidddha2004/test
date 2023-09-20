#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Write a program to find year is leap or not\n");
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    if((year%4==0)&&(year%100!=0)||(year%400==0)){
        printf("%d is a leap year\n",year);
    }
    else{
        printf("%d is not a leap year\n",year);
    }
    printf("Write a program to find entered data is vowel or consonant\n");
    char vc;
    printf("Enter your charachter:");
    scanf("%c",&vc);
    if(vc=='a'||vc=='e'||vc=='i'||vc=='o'||vc=='u')
    {
        printf("'%c' is a vowel",vc);
    }
    else{
        printf("'%c' is a consonant",vc);
    }



    return 0;
}
