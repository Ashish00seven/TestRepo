#include<stdio.h>
int main(void){

    int n; 
    for(int i = 2; i*i<n;i++){
        if(n%i==0){
            printf("The number is not prime");
            break;
        }else if(i*i==n){
            printf("The number is prime");
        }
    }
}

    