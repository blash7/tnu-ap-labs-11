#include <stdio.h>
int main()
{
float array[3];
float c=0;
static int temp[4]={100,160,230,260};   
static char *str[] = {"кипятке", "олове", "припое", "свинце"};
printf ("Лабораторная работа \"Градуировка термопары\"\n");
for (int i=0; i<=3; i++) {
	printf ("Значение ЭДС на термопаре в Вольтах в %s: ", str[i]);
	scanf("%f", &array[i]);
}
for (int z=0; z<=3; z++) {
 	array[z]=array[z]/temp[z];
 	printf ("Константа С на термопаре в Вольтах в %s: %f\n", str[z], array[z]);
 	c+=array[z];
}
printf ("Приблизительный коэфициент термопары: %1.4f\nСпасибо за работу! Пока!\n", c/((sizeof(array)/sizeof(int))+1));
}