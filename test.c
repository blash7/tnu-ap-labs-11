#include <stdio.h>
void main()
{
int gr, mr, gt, mt, vozrast; 
scanf("%d%d%d%d", &gr, &mr, &gt, &mt);
vozrast=gt-gr;
if(mr>mt) vozrast--;
printf ("Возраст: %i\n", vozrast);
return 0;
}