#include <stdio.h>
#include <math.h>
void main()
{
float grad;
printf("Введите градусы: ");
scanf("%f", grad);
printf("Радианы: %f\n",  (grad*pi())/180);
}