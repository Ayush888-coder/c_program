#include <stdio.h>

int main()
{
//program for eligiblity to vote
int age ;
printf("Enter your age buddy");
scanf("%d" , &age);

if (age>18)
printf("You are eligible to vote");

else if(age>12)
printf("You are a teenager yet !");

else
printf("You are not eligible to vote !");

return 0;
}
