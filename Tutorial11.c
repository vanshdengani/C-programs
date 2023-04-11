#include <stdio.h>

int main(                     )
{
    int age, marks;
    printf("enter your age\n");
    scanf("%d", &age);
    scanf("%d", &marks);

    switch (age)
   {    
    case 3:
        printf("your age is 3\n");
        switch (marks)
        {
        case 45:
            printf("your marks are 45\n");
            break;
        
        default:
            printf("your marks are not 45\n");
            break;
        }
        break;
    case 13:
        printf("your age is 13\n");
        break;
    case 23:
        printf("your age is 23\n");
        break;
    
    default:
        printf("Age is not 3, 13 or 23\n");
        break;
    }
    return 0;
}
