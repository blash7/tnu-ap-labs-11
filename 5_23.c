#include <stdio.h>
#include <math.h>
int nod(int a, int b) { return !b ? a : nod(b, a % b); }
int nok(int a, int b) { return a / nod(a, b) * b; }
int main()
{
int a,b;
printf ("Введите a и b\n");
scanf ("%d %d", &a, &b);
printf("НОД: %d, НОК: %d\n", nod(a,b), nok(a,b));
}