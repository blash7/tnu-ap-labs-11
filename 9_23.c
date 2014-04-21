# include <stdio.h>
int main()
{
int k;
char *str="Привет, мир!!! ";
for (k=0; (*str)!= '\0'; str++)
if ((*str)==' ') k++;
printf("Количество пробелов: %d\n", k);
return 0;
}