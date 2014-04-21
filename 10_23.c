#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void file_cmp(char file1[10], char file2[10]);
int main()
{
	file_cmp("file1", "file2");
	return 0;
}
void file_cmp(char file1[10], char file2[10]) {
	FILE *f1=fopen(file1,"r");
	FILE *f2=fopen(file2,"r");
	if(f1 == NULL || f2 == NULL) {	printf("Что-то пошло не так... :(. Проверьте наличие файлов\n"); exit(1);}
	char ch_1[100], ch_2[100]; int a = 0;
	while(!feof(f1) && !feof(f2))
	{
		fgets(ch_1, 100, f1); fgets(ch_2, 100, f2); a++;
		if(strcmp(ch_1, ch_2)) printf("Строки %d различаются\n", a);
	}
	fclose (f1);
	fclose (f2);
} 