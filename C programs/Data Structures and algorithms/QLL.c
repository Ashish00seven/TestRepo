#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>

bool isPrime(int N){
    if(N<=1){
        return false;
    }
    for(int i =2;i<N-1;i++){
        if(N%i==0){
            return false;
        }
        
    }
    return true;
}

bool isjizz(int N){

    for(int i = N-10;i<N+10;i++){

        if(isPrime(i)){
            return false;
        }
    }
    return true;
}



int main(void){
    
    int b,c;
    int counter =0;

    printf("Enter lower number ");
    scanf("%d",&b);
    printf("Enter upper number ");
    scanf("%d",&c);

    for(int i = b ; i<=c;i++){

       if(isjizz(i)){
           counter++;
       }
    }
    printf("The number of  jizz numbers are  %d\n",counter);
   

}

