#include<stdio.h>
#include<ctype.h>

int no_of_operations(int Arr[], int N){
    int max = 1; 
    int l = 1;
    for(int i = 1; i<N ; i++){
        if(Arr[i]>Arr[i-1]){

            l+=1;
        }else{
            if(max<l){
                max = l;
            }
            l = 1;
        }
       
    }
    if(max<l){
        max = l;
    }
    int result = N -max;
    return result;
}

int main(void){

    int Arr[] = {575,682,102,97,0,500,490,200,120,80,800,50,40,2,1,5,4,2,682};
    // 575 682 102 97 0 500 490 200 120 80 800 50 40 2 1 5 4 2 682
    int A[] = {2,4,6,8,7,9,11,13,15,17,19};
    int N = 19;
    int g = no_of_operations(Arr,19);
    printf("%d",g);

    
}