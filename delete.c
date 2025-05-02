#include<stdio.h>
int delete(int queue[],int max,int front,int rear){
    int y;
    if(front==-1||front>rear){
        printf("underflow");
    }
    else{
        y=queue[front];
    
    if(front==rear){front=rear=-1
    }
    else{front=front+1;}}
    return y;
}