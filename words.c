#include <stdio.h>
#include <string.h>
    
int is_pal(const char * s, size_t size){
    return ( size < 2 ) ? 1 : ( *s == *(s + size - 1) ) ? is_pal(s + 1, size - 2) : 0;
}
int main(void){
    char str[256];
    while ( printf("Слово: ") > 0 && scanf("%255[^\n]%*c", str) == 1 )
        printf("Is %sa palindrome.\n", ( is_pal(str, strlen(str)) ) ? "" : "not ");
    
    return 0;
}