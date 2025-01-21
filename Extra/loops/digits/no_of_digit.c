#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int cnt = 0;

    int n_copy = n;

    while(n > 0){
        cnt ++;
        n /= 10;
    }
// Printing
    printf("No of digits in n %d is %d",n_copy,cnt);
}