 #include <stdio.h>
#include <math.h>
int main()
{
int count=0;
double sum=0;
int a[2][6] = {
                      { -30, 52,  34, 10, 20, -30 },
                      {  24,  4,  67,  4, -5, -20 }
               };
 for (int i=0; i<2; i++)
      {
         for (int j=0; j<6; j++) { 
         	if(a[i][j]>0){
         		count++;
         		sum+=a[i][j];
         	}
         }
         printf("%.3lf \n", (sum/count));
         sum=0; count=0;
      }
}
