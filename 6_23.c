#include <stdio.h>
#include <math.h>
int main()
{
int i=0;
double sum=0;
int *addr[2], n;
int min = 0;
int a[2][2] = {
                      { 190, 100 },
                      {  20,  400 }
               };
 for (int i=0; i<2; i++)
      {
         for (int j=0; j<2; j++) { 
          if (a[i][j] < a[i][min]) min = j;
         }
         addr[i]=&a[i][min];
      }
n = sizeof(addr)/sizeof(int);
//printf("%d", n);
for (int k = 0; k < n; ++k)
{
if (*addr[k] < *addr[min])
min = k;
}
*addr[min]=0;
for (int i=0; i<2; i++)
     {
        for (int j=0; j<2; j++) printf ("%d   ", a[i][j]);
        printf("\n");
     }
}
