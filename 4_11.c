#include <stdio.h>
#include <math.h>
int main()
{
int a,b,sel;
printf ("Введите a и b и выбор (1-кубич, 2-линейное, 3-неравенство)\n");
scanf ("%d %d %d", &a, &b, &sel);
for(int c=-100;c<=100;c++){
for(int x=-100;x<=100;x++){
switch (sel) {
  case 1:
    if(a*pow((double)x,3)+b*x+c==0) printf("a: %d, b: %d, c: %d, x: %d\n", a, b, c, x);
  break;
  case 2:
    if(a*x==b) { 
      printf("a: %d, b: %d, x: %d\n", a, b, x);
      goto end;
    };

  break;
  case 3:
    if(a*x<b) printf("a: %d, b: %d, x: %d\n", a, b, x);
  break;
}  
}
}
end:
printf("Финал!\n");
}