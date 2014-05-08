#include <stdio.h>
#include <string.h>
 
void main()
{
char ch, string[1000];
int i=0;
FILE* file=fopen("7_10.txt","r");
while((ch = fgetc(file)) != EOF) string[i++]=ch;
fclose(file);
while (i) printf("%c", string[--i]);
printf("\n");
}