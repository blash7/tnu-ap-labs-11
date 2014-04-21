#include <stdio.h>
#include <math.h>
float factorial(float x) { 
    return !x ? 1 : x * factorial(x - 1);
}
int main()
{
long double sum=0;
for(int i=1;i<=1000;i+=1){
sum+=pow(-1,i)/factorial(i);
if(fabsl(pow(-1,i)/factorial(i))<0.0001) break;
}
printf("%.4Lf\n", sum);
}