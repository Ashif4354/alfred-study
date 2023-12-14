#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);

    int array[n], final[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    
    int sum1, sum2, diff;
    for(int i = 0; i < n; i++){
        sum1 = 0; sum2 = 0;

        for(int j = 0; j <= i; j++){
            sum1 += array[j];
        }

        for(int j = i + 1; j < n; j++){
            sum2 += array[j];
        }

        diff = sum1 - sum2;
        // printf("%d %d %d\n", sum1, sum2, diff);
        if(diff < 0){
            diff *= -1;
        }
        final[i] = diff;
    }
    printf("{");
    for(int i = 0; i < n; i++){
        printf("%d ", final[i]);
    }
    printf("}");
}