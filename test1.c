#include <stdio.h>
int pwr(int x, int k) { 
    return !k ? 1 : x*pwr(x, --k);
}
void main()
{
printf("%d\n", pwr(3,6));
}