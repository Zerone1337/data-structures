#include <stdio.h>
#include <stdlib.h>
void push();
struct node{
    int val;
    struct node* next;
};
struct node* head;
void push()
{
    int val;
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("not able to push elements");
    }
    else{
        printf("enter the value");
        scanf("%d",&val);
        if(head==NULL){
            ptr->val=val;
            ptr->next=NULL;
            head=ptr;
        }
        else{
            ptr->val=val;
            ptr->next=head;
            head=ptr;
        }
        printf("item pushed");
    }
    }
    int main(){
        push();
        return 0;

    }