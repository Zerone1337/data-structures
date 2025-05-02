#include<stdio.h>
#include<stdlib.h>
struct AdjNode{
    int dest;
    AdjNode *next;
}AdjNode;
struct AdjList{
    AdjNode *head;
}AdjList;
struct Graph{
    int V;//number of vertices in the graph
    AdjList *array;
}Graph;
AdjNode *newNode{
AdjNode *newNode1=(AdjNode*)malloc(sizeof(AdjNode));
newNode1->dest=dest;
newNode1->next=NULL;
return newNode;
}
Graph *creatGraph(int V)
    {
        Graph *graph=(Graph*)malloc(sizeof(Graph));
        graph->V=V;
        graph->array=(AdjList*)(malloc(V *sizeof(AdjList)));
        int i;
        for (i=0;i<V;++i){
            graph->array[i].head=NULL;
            return graph;
        }
    //function to add an edge to undirected graph
        void AddEdge(Graph *graph,int src,int dest){
            //Add an edge from src to dest the node is added at the beginning
            AdjNode *check=NULL;
            AdjNode *newNode1=newNode(dest);
            if(graph->array[src].head==NULL){
                newNode->next=graph->array[scr].head;
                graph->array[scr].head=newNode1;
            }
            else{
                check=graph->array[src].head;
                while(check->next!=NULL){
                    check=check->next;
                }
                    check->next=newNode1;
            }check->next=newNode1;
        }
    }
    //since graph is undirected,add an edge from dest to src also
    newNode1=newNode(src);
    if(graph->array[dest].head==NULL){
        newNode1->next=graph->array[dest].head;
        graph->array[dest].head=newNode;
    }
    else{check=graph->array[dest].head;
        while(check->next!=NULL){
            check=check->next;
        }
        check->next=newNode;
}
//function to print the adjacency list representation of graph
void print(Graph *graph)
{
    int v;
    for(v=0;v<graph->V;++v){
        
    }
}    