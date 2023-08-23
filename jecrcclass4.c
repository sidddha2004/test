#include <stdio.h>


int main()

{

    //Arithematic opertation
    int a,b;

    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("SUM=%d\n",a+b);
    printf("SUBSTRACTION=%d\n",a-b);
    printf("DIVISION=%d\n",a/b);
    printf("MULTIPLICATION=%d\n",a*b);
    printf("MODULUS=%d\n",a%b);

    //Relational operators
    printf("%d<%d=%d\n",a,b,a<b);
    printf("%d>%d=%d\n",a,b,a>b);
    printf("%d<=%d=%d\n",a,b,a<=b);
    printf("%d>=%d=%d\n",a,b,a>=b);
    printf("%d!=%d=%d\n",a,b,a!=b);
    printf("%d==%d=%d",a,b,a==b);

    //Assignment operator
    //a+    a= a+b
    //a-    a= a-b
    //a/    a= a/b
    //a*    a= a*b
    //a%    a= a%b

    int d=5,c;
    c=d;
    printf("%d\n",c);
    c+=d;
    printf("c+=d:%d\n",c);
    c-=d;
    printf("c-=d:%d\n",c);
    //Upper wale me c ki last value se dhekha jayega
    //or aage bhi same hoga ki c ki last value dhekhega
    c/=d;
    printf("c/=d:%d\n",c);
    c*=d;
    printf("c*=d:%d\n",c);
    c%=d;
    printf("c%=d:%d\n",c);










    return 0;


}
