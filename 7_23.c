#include <stdio.h>
#include <string.h>
 
void main()
{
 char ch;
 FILE* file=fopen("T2","r");
 while((ch = fgetc(file)) != EOF)
 {
    if(ch==32) { printf("  "); } else { printf("%c",ch); }
 }
 printf("\n");
 fclose(file);
}