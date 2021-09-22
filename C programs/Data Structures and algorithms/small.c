#include<stdio.h>
#include<string.h>

int index(char* sub, char* string){
    int a = strlen(sub);
    int b = strlen(string);
    int  k =0;

    for(int i = 0 ; i<b;i++){
        k=i;
        for(int j = 0; j<a;j++){
            if(string[k]==sub[j]){

                k++;
            }
            
        }
        if(k==i+a){
            printf("Substring found\n");
            return k;
            break;
        }
    }
    
    return -1;
}
int main(void){
    char* A = "Ashish";
    char* B = "A";
    int indexes = index(B,A);
    if(indexes == -1){
        printf("substring not found");
    }else{
        printf("%d and %d", indexes - strlen(B), indexes - 1);
    }

    
}