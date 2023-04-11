#include <stdio.h>


int main()
{
   int subjects;
   
   printf("the subjects you passed in the exam\n");
   printf("press the number accordingly.\n");
   printf("1]maths and science\n");
   printf("2]maths\n");
   printf("3]science\n");
   scanf("%d", &subjects);

   if (subjects==1)
    {
        printf("you will get the gift of rupees 45");
    }    
   
   
   
    else if (subjects==2 || subjects == 3)
    {
        printf("you will get the gift of rupees 15");
    }    
   
   else {
    printf("you have enetered the wrong preference");
   } 
   
    return 0;
}
