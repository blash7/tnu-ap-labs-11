#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct abonent { char * name; int phone; }abonent;
int name(const void * a, const void *b){ return strcmp(((abonent*)a)->name, ((abonent*)b)->name); }
int phone(const void * a, const void *b){ return ((abonent*)a)->phone - ((abonent*)b)->phone; }
#define COUNT 3
 
int main(void){
    abonent persons[COUNT] = {
        { .name = "Иванов", .phone = 306520900 },
        { .name = "Петров", .phone = 306409009 },
        { .name = "Сидоров", .phone = 301299090 }
    };
    printf("Не сортированный:\n");
    for (int i = 0; i < COUNT; ++i )
        printf("%s\t%d\t\n", persons[i].name, persons[i].phone);
    qsort(persons, COUNT, sizeof(abonent), name);
    printf("\nОтсортированный по фамилии:\n");
    for (int i = 0; i < COUNT; ++i )
        printf("%s\t%d\t\n", persons[i].name, persons[i].phone);
    qsort(persons, COUNT, sizeof(abonent), phone);
    printf("\nОтсортированный по телефону:\n");
    for (int i = 0; i < COUNT; ++i )
        printf("%s\t%d\t\n", persons[i].name, persons[i].phone);
    return(0);
}