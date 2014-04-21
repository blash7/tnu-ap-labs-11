#include <stdio.h>
#include <math.h>
int main()
{
double x,y;
scanf("%lf", &x);
y=x-floor(x);
if(y==0 & x>0) { puts("Целое! Положительное!"); }
else if(y==0 & x<0)  {puts("Целое! Отрицательное");}
if(x>0) { puts("Дробное! Положительное!"); }
else if(x<0)  {puts("Дробное! Отрицательное");}
return 0;
}