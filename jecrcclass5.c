#include <stdio.h>


int main()
{
    //Logical Opertaors

    printf("LOGICAL OPERTAROS\n");
    int a,b;
    printf("Enter the first number 'a':");
    scanf("%d",&a);
    printf("Enter the second number 'b':");
    scanf("%d",&b);
    printf("&&:  %d\n",(a<10)&&(b>10));
    printf("||:  %d\n",(a<10)||(b>10));
    printf("!:  %d\n",!(b>10));
    //&& shows 1 if both conditions are true
    // 0 if any of the one conditions does not satisfies
    //|| show 1 if any of the one conditions satisfies
    //otherwise it will show 0
    // ! is a not operator
    printf("&& shows 1 if both conditions are true \n 0 if any of the one conditions does not satisfies \n ");
    printf("|| show 1 if any of the one conditions satisfies otherwise it will show 0\n");
    printf("! is a not operator\n");
    //Prefix= ++a and --a
    //Postfix= a++ and a--
    printf("Prefix= ++a and --a\n");
    printf("Postfix= a++ and a--\n");
    int i=4;
    printf("The Number is %d\n",i);
    printf("++a=%d\n",++i);
    printf("--a=%d\n",--i);
    printf("a++=%d\n",i++);
    printf("a--=%d\n",i--);
    return 0;
}
