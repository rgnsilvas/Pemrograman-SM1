#include <stdio.h>

int main(){
    int num;
    printf("Input\n");
    scanf("%d", &num);
    printf("\nOutput\n");
    
    if(num == 0){
        printf("nol");
    } else if(num > 0){
        printf("positif");
    } else{
        printf("negatif");
    }
    return 0;
}