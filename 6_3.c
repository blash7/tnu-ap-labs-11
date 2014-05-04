#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 10
void main()
{
        int X[N]={0, 1, -1, -2, 2, 4, 7, -30, 9, 8}, max = X[0], i;
        double Y[N];
        for(i = 0; i < N; ++i)
        {
            if(abs(X[i]) > max) max = abs(X[i]);
        }
        printf("Max = %d\n", max);
        for(i = 0; i < N; ++i) { 
            Y[i] = (double)X[i]/max;
            printf("%lf\n", Y[i]);
        }
}
