#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int* arr;
};

bool isEmplty(struct stack* ptr){
    if(ptr->top==-1){
        return true;
    }
    return false;
}
bool isFull(struct stack* ptr){
    if(ptr->top == ptr->size){
        return true;
    }
    return false;
}
void push(int element, struct stack* ptr){

    if(isFull(ptr)){

        printf("full");

       
    }else{
        ptr->arr[ptr->top + 1] = element;
        ptr->top++;

    }
void pop(struct stack* ptr){
    if(isEmplty(ptr)){
        printf("emoty");
    }else{
        int value = ptr->arr[ptr->top];
        ptr->top--;
    }
}
void s(struct stack* ptr){
    for (int i=0; i<ptr->top;i++){
        printf("The value of element %d is %d",i+1,ptr->arr[i]);
    }
}
    
    
}

int main(void){
    struct stack* a;
    a->top = -1;
    a->size = 10;
    a->arr = (int*)malloc(a->size*sizeof(int));
    push(5,a);
    push(6,a);
    s(a);

}