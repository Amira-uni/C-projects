#include<stdio.h>
int main(){
    int n, sum,last_digit;
    printf("Enter the number: ");
    scanf("%d", &n);
 if (n%2==0){
    while (n!=0)
    {
        
    
    
        last_digit = n%10;
        sum = sum +last_digit;
        n = n/10;
    }
 
    printf("%d", sum);}
    else{
        printf("The number is not even");
    }
    return 0;
}