#include<stdio.h>
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int i=1;
    if (i % 2 !=0)
    {
        for ( i =1 ; i <=n; i=i+2){
        
            printf("%d \n", i);
        }
        
    }
    else{
        printf("your entered number is even.");
    }
    
    return 0;
}