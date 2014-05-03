#include <stdio.h>
#include <string.h>
void to_str(char * arr, char * string) { 
    int size=0;
    while (arr[size]) size++;
  	memcpy(string, arr, size);
    string[size]='\0';
}
void main()
{
	char *string;
	char arr[4]={'A', 'B', 'C'};
	to_str(arr, string);
	printf("%s\n", string);
}