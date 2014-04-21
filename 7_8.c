#include <stdio.h>
#include <string.h>
 
void main()
{
char ch, string[1000];
int i=0;
FILE* file=fopen("TWO","r");
while((ch = fgetc(file)) != EOF) {
	if(ch==46) break; 
	string[i++]=ch;
}
fclose(file);
file=fopen("TWO","w");
fputs(string, file);
fclose(file);
}