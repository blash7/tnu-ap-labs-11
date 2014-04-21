#include <stdio.h>
#include <math.h>
#define weight1 96
#define weight2 70
#define days 30
int main()
{
double w=96;
double k;
for(k=0.00001; k<=1; k+=0.00001){
	for (int i = 1; i <= 30; i++)
	{
	w=(double)w-(double)(w*k);
	printf("%lf\n", w);	
	}
	if(w<=70) { break; } else { w=96; };
}
//double zz=log((double)weight2/weight1)/days, day;
// scanf("%lf", &day);
//printf("%lf\n", 96*exp(k*day));	
printf("%lf\n", k);	
int day;
w=96;
scanf("%i", &day);
	for (int i = 1; i <= day; i++)
	{
	w=(double)w-(double)(w*k);
	printf("%lf\n", w);	
	}
}
