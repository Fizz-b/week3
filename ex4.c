#include<stdio.h>
int main()
{ 
 int *ptr;
 int x=12345,y;
 ptr=&x;
 printf("The valute of ptr is %p\n",ptr);
 printf("THe address of x is %p \n\n",&x);
 
 printf("The total character printed on this line is:%n",&y);
 printf("%d\n\n",y);
 
 y=printf("This\n");
 printf("%d characters were printed\n\n",y);
 printf("Printing a %% in a format control string\n");
 
 return 0;
}
