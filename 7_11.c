#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
 
void main()
{
    FILE *f=fopen("7_11.txt", "r");
    char *string;
    int length=100;
    while(!feof(f)) {
        fgets(string, 100, f);
        if(strlen(string)<length) length=strlen(string);    }
    rewind(f);
    while(!feof(f)) {
        fgets(string, 100, f);
        if(strlen(string)==length) break; }
    printf("%s\n", string);
    fcloseall();
}