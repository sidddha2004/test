#include <stdio.h>
int main()
{
    int a;
    printf("Enter your math marks:-");
    scanf("%d",&a);
    int b;
    printf("Enter your science marks:-");
    scanf("%d",&b);
    if (a>33&&b>33)
    {
        printf("You have passed in both subjects and won 45 rupees\n");
    }
    else
    {
        {if (a>33)
        {
            printf("You passed in math and won 15 rupee\n");
        }
        else
        {
            printf("You falied in math and won nothing\n");
        }}
        {if (b>33)
        {
            printf("You passed in science and won 15 rupee\n");
        }
        else
        {
            printf("You falied in science and won nothing\n");
        }}
        printf("You have failed in both exam and won nothing\n");

        
        
    }
    
    










    return 4;
    






}
