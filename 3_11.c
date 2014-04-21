#include <stdio.h>
int main()
{
int year1=1904;
int year2=2013;
int a, b;
printf ("Введите количество людей в %i году: ", year1);
scanf("%i", &a);
printf ("Введите количество людей в %i году: ", year2);
scanf("%i", &b);
printf ("Среднегодовой прирост: %d\n", (b-a)/(year2-year1));
}