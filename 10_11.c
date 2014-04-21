 #include <stdio.h>
 int * sort_array(int * a, unsigned n) {
 	for(int i = 0 ; i < n ; i++) { 
        for(int j = 0 ; j < n - i - 1 ; j++) {  
           if(a[j] > a[j+1]) {           
              int tmp = a[j];
              a[j] = a[j+1];
              a[j+1] = tmp; 
           }
        }
    }
 	return a;
 }
 int main() {
    int n=14;
    int half=n/2;
    int *p;
    int a[14]={10, 20, 4, 6, 7, 7, 7, 7, 8, 9, 123, 123, 13, 14};
    p=sort_array(a, n);
    printf("Часть 1: ");
    for(int i = 0 ; i < n; i++) { 
        if(i==half) printf("\nЧасть 2: ");
        printf("%d ", p[i]);
    }
    printf("\n");
 }