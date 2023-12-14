#include<stdio.h>

void main(){
    int n, s;
    scanf("%d", &n);
    scanf("%d", &s);
    
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int max = 0, sum;
    for(int i = 0; i < n - s; i++) {
        sum = 0;
        for(int j = 0; j < s; j++) {
            sum = sum + (a[i + j] * (j + 1));
        }
        if(sum > max){
            max = sum;
        }
    }

    printf("%d", max);
}

// 8
// 2
// 56437891
// output: 26