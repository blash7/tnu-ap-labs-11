#include <stdio.h>
#include <math.h>
void main (){
float a,b,c,p,s;
printf("a=");
scanf("%f",&a);
printf("b=");
scanf("%f",&b);
printf("c=");
scanf("%f",&c);
p=(a+b+c)/2;
s=sqrt(p*(p-a)*(p-b)*(p-c)) ;
printf("Площадь треугольника=%f\n", s) ;
} 