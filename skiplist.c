#include<stdio.h> 
#include<stdlib.h>
#include<limits.h>
#define MAX_LEVEL 32
typedef int keytype;
typedef int valuetype;

typedef struct node{
keytype key ;
valuetype value;
struct Node *forward[MAX_LEVEL+1];
                   }node;

typedef struct skiplist{
    node *header;
    int level;
                       }skiplist;

void initializeskiplist(skiplist *l);
node createnode(keytype key,valuetype value,int level);
void deleteNode(skiplist *l,node *current,node *update[]);
void Deletion(skipList *l);

void initializeskiplist(skiplist *l){
    l->header=(node*)createnode(int_min,0,max_level);
    l->level=0;
                                    }

node* createnode(keytype key,valuetype value,int level){
    node *newnode=(node*)malloc(sizeof(node));
    newnode->key=key;
    newnode->value=value;
for(int i=0;i<=level;i++){
    newnode->forward[i]==NULL;
                         }
   return newnode;
                                                       }

void Deletion(Skiplist *l,keytype Key){
    node *update [MAX_LEVEL+1];
    node *current = l->header;
    for (int i=l->level ; i>=0;i--){

        while(current->forward[i]!=NULL&&current->forward[i]->key<Key){
            current=current->forward[i];
            }                                   
                                    update[i]=current;
                                        }
        current[i]=current->forward[0];
if(current!=NULL&&current->key==key){
    deleteNode(l,current,update);   
                }
}

void deleteNode (skiplist*l,node *current,node *update[]){
    for(i=0;i<=l->level;i++){
        if (update[i]->forward[i]!=current)break;
        update[i]->forward[i]=current->forward[i];
    }
    free(curent);
    while(l->level->&&l->header->forward[l>level]==NULL){
        l->level--;
    }

}
int main(){
    skiplist l;
    initializeskiplist(&l)
}