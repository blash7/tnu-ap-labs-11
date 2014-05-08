#include <stdio.h>
#include <string.h>
 
void main()
{
char ch, string[1000];
int i=0;
FILE* file=fopen("7_22.txt","r");
while(!feof(file)) {
	fscanf(file, "%s", string); 
	if(string[0]==97) { printf("%s\n", string); }
}
fclose(file);
}