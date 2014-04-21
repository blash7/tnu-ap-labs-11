#include <stdio.h>
int main()
{
float c1, c2;
printf("Введите емкость С1 в Пф: ");
scanf("%f", &c1);
printf("Введите емкость С2 в Пф: ");
scanf("%f", &c2);
printf ("Для паралельного: %f Пф, для последовательного: %f Пф\n", c1+c2, (c1*c2)/(c1+c2));
}