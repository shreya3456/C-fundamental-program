#include <stdio.h>
#include <conio.h>
void main()
{
clrscr();
int s=4, l=2, b=4, base=5, h=6, r=3;
float pi=3.14;
printf("%d is area of square", s*s);
printf("%d is perimeter of square", 4*s);
printf("%d is area of rectangle", l*b);
printf("%d is perimeter if rectangle", 2*(l+b));
printf("%f is area of circle", pi*r*r);
printf("%f is circumference of circle", 2*pi*r);
printf("%d is area of triangle", (base*h)/2);
getch();
}