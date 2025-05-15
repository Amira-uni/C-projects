#include<stdio.h>
int main(){
    int n, sum,last_digit;
    printf("Enter the number: ");
    scanf("%d", &n);

    while (n!=0)
    {
        last_digit = n%10;
        sum = sum +last_digit;
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}