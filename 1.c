#incude<stdio.h>
#include<conio.h>
void main()
{
 double a,b,result;
 char operator;
 printf("enter 2 values:\n");
 scanf("%lf%lf",&a,&b);
 printf("enter type_of_operation\n");
 scanf(" %c",&operator);
 switch(operator)
  {
   case '+':
           result=a+b;
           break;
   case '-':
           result=a-b;
           break;
   case '*':
           result=a*b;
           break;
   case '/':
           result=a/b;
           break;
   default:
   printf("you entered invalid operator");
   }
 printf("Result=%lf",result);
 getch();
 }
