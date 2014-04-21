#include <stdio.h>
int main()
{
int i;
static char *str[] = {"На выставке будут представлены работы Васнецова",
					  "В музях города появились новые экспонаты",
					  "К сожадению ничего нового не произойдет ",
					  "Скоро в театрах \"Вишневый сад\""};
printf ("Выберите нужную афишу:\n1.Выставки\n2.Музеи\n3.Кинотеатры\n4.Театры\n");
start: 
i = getchar();
switch (i) {
case 49:
  	printf("%s\n", str[0]);
  break;
case 50:
	printf("%s\n", str[1]);
  break;
case 51:
	printf("%s\n", str[2]);
  break;
case 52:
	printf("%s\n", str[3]);
  break;
case '\n': case ' ':
  goto start;
  break;
default:
 	printf("Выбор не верен!\n");
 	goto start;
  break;
}
}