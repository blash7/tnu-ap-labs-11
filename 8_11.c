#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
struct addr { char name[30], lastname[40], patronymic[20], year[4]; unsigned long int grade; } stud_list[MAX];
void init_list(void), enter(void), delete(void), list(void), load(void), save(void), edit_list(void), search11(void);
int menu_select(void), find_free(void);
int main(void)
{
  char choice;
  init_list();
  for(;;) {
    choice = menu_select();
    switch(choice) { case 1:enter();break; case 2:delete();break; case 3:list();break; case 4:save();break;
    				 case 5:load();break; case 6: edit_list();break; case 7: search11(); break; case 8: exit(0); }
  	}
  return 0;
}
void init_list(void)
{
  for(int t=0; t<MAX; ++t) stud_list[t].name[0] = '\0';
}
int menu_select(void)
{
  int c;
  printf("1. Ввести имя\n2. Удалить имя\n3. Вывести список\n4. Сохранить файл\n5. Загрузить файл\n6. Редактировать\n7. Поиск\n8. Выход\n");
  do {
    printf("\nВведите номер нужного пункта: ");
    scanf("%i", &c);
  } while(c<0 || c>8);
  return c;
}
void enter(void)
{
  int slot = find_free();
  if(slot==-1) {
    printf("\nСписок заполнен");
    return;
  }
  printf("Введите фамилию, имя, отчество, год поступления, балл: ");
  scanf("%s%s%s%s%lu", stud_list[slot].name, stud_list[slot].lastname, stud_list[slot].patronymic, stud_list[slot].year, &stud_list[slot].grade);
}
int find_free(void)
{
  register int t;
  for(t=0; stud_list[t].name[0] && t<MAX; ++t) ;
  if(t==MAX) return -1;
  return t;
}
void delete(void)
{
  register int slot;
  char s[80];
  printf("Введите № записи: ");
  scanf("%s", s);
  slot = atoi(s);
  if(slot>=0 && slot < MAX)
    stud_list[slot].name[0] = '\0';
}
void edit_list(void)
{
  int slot;
  printf("Введите № записи: ");
  scanf("%i", &slot);
  slot--;
  printf("Введите фамилию, имя, отчество, год поступления, балл: ");
  scanf("%s%s%s%s%lu", stud_list[slot].name, stud_list[slot].lastname, stud_list[slot].patronymic, stud_list[slot].year, &stud_list[slot].grade);
}
void list(void)
{
  register int t;
  for(t=0; t<MAX; ++t) {
    if(stud_list[t].name[0]) {
    printf("%s  %s  %s  %s  %lu\n",stud_list[t].name,stud_list[t].lastname,stud_list[t].patronymic,stud_list[t].year, stud_list[t].grade);
    }
  }
  printf("\n");
}
void search11(void)
{
  char s[80];
  printf("Введите фамилию:");
  scanf("%s", s);
  for(int t=0; t<MAX; ++t) {
    if(strcmp(stud_list[t].name, s)==0 && stud_list[t].name[0]) {
    printf("%s  %s  %s  %s  %lu\n",stud_list[t].name,stud_list[t].lastname,stud_list[t].patronymic,stud_list[t].year, stud_list[t].grade);
    }
  }
  printf("\n");
}
void save(void)
{
  FILE  *fp;
  register int i;
  if((fp=fopen("students", "wb"))==NULL) {
    printf("Ошибка при открытии файла.\n");
    return;
  }
  for(i=0; i<MAX; i++)
    if(*stud_list[i].name)
      if(fwrite(&stud_list[i],
         sizeof(struct addr), 1, fp)!=1)
           printf("Ошибка при записи файла.\n");
  fclose(fp);
}
void load(void)
{
  FILE  *fp;
  register int i;
  if((fp=fopen("students", "rb"))==NULL) {
    printf("Ошибка при открытии файла.\n");
    return;
  }
  init_list();
  for(i=0; i<MAX; i++)
    if(fread(&stud_list[i],
       sizeof(struct addr), 1, fp)!=1) {
         if(feof(fp)) break;
         printf("Ошибка при чтении файла.\n");
    }
  fclose(fp);
}