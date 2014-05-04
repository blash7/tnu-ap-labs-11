#include <stdio.h>
#include <math.h>
int main()
{ 
double pr, s=0,e=0.0001;
int i=1;
do {
 pr=(double)1/(4*i*i);
 i++;
 s+=pr;
} while(pr>e);
printf("%lf\n", s);
}

