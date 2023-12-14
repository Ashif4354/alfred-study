#include<stdio.h>
#include<string.h>

void main(){
    char string[100];
    scanf("%s", string);

    int string_len = strlen(string);

    int len = 0, max_index = 0;
    char prev = string[0];

    for(int i = 0; i < string_len; i++){
        if(string[i] == prev){
            len++;
            if(len > max_index){
                max_index = len;
            }
        } else {
            len = 1;
            prev = string[i];
        }
    }
    printf("%d", string_len - max_index);
}