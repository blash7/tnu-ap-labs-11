#include <stdio.h>
#include <stdlib.h>
void main(){
FILE *in=fopen("test3.txt","r");
if(in==NULL) { 
	printf("Не могу открыть файл!\n");
	exit(1);
}
int s=sizeof(double), c=0;
double* a = malloc(s);
while(!feof(in)) {
	fscanf(in,"%lf", &a[c++]);
	a = realloc(a, (s*=2));
	if(!a) { 
		printf("Не могу выделить память!\n");
		exit(1);
	}
}
printf("Найденные значения в файле:\n");
for(int i=0; i<c; i++) printf("%lf\n", a[i]);
fclose(in);
double min=a[0],max=a[0],hs;
int lhs=0, mhs=0;
for (int i=1;i<c;i++){
	if (min>a[i]) min=a[i];
	if (max<a[i]) max=a[i];
}
printf("Минимальное: %lf; максимальное: %lf, полусумма: %lf\n", min, max, (hs=(min+max)/2));
for (int i=0; i<c; i++){
	if (a[i]<hs) lhs++;
	if (a[i]>hs) mhs++;
}
printf("Количество элементов больших полусуммы: %i, меньше: %i\n", mhs, lhs);
}