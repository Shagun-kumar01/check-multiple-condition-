#include<stdio.h>

int main()
{
  int marks;
printf(" Enter the marks : ");
scanf("%d", &marks);

if(marks>=90)
printf(" Grade A");

else if(marks>=70)
printf(" Grade B");

else if(marks>=55)
printf(" Grade C");

else if(marks>=33)
printf(" Student is Passed");

else 
printf(" Failed ");

return 0;
}

// output is 
//  Enter the marks : 34
 //Student is Passed
