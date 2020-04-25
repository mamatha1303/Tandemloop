#include<stdio.h>
#include<conio.h>
void main()
{
 int a,i;
 printf("enter a number\n");
 if(scanf("%d",&a)==1)  //checking whether the input is a number or not
 {
     for(i=1;i<=(2*a);i++)
      {
         if(i%2==1)
          {
             if(i==(2*a)||i==(2*a)-1) //not to print comma(,) in the output for the last number
                printf("%d ",i);
              else
                 printf("%d ,",i);
            }
        }
 }
 else
 {
   printf("1 , 3 , 5 , 7...................");
 }
 getch();
 }
