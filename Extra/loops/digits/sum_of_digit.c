#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int cnt = 0;

    int n_copy = n;
    int sum  = 0;

    while(n > 0){
        sum += n%10;
        n /= 10;
    }

    printf("Sum of digits in n %d is %d",n_copy,sum);
}