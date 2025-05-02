#include<stdio.h>
void insert(queue);
int main(){
    char queue[100];
    printf("please enter your name");
    insert(queue);
}
void insert(int queue[],int front,int rear,int item,int max){
if (rear+1==max){
    printf("Overflow");
}
else {
    if(rear==-1 && front==-1)
    {
        rear=0;
        front=0;
     }
     else{for(int rear=1;rear<=max;rear++)
            queue[rear]=item;
            scanf("%s",&item);
            printf("\n%s",item);
         }9
   
}
}