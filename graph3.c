#include<stdio.h>
#define Max_vertices 100
void add_vertices(int graph[Max_vertices][Max_vertices],int vertices){
    for (int i;i<vertices;i++){
        for(int j;j<vertices;j++){
            printf("%d",graph[i][j]);
        }
            printf("\n");
    }
}
void add_vertex(int graph[Max_vertices][Max_vertices],int *vertices){
if (*vertices>=Max_vertices||*vertices<0){
    printf("cannot add more vertices");
    return;
}
(*vertices)++;
for(int i;i<*vertices;i++)
{
    for(int j;j<*vertices;j++)
    graph[i][*vertices-1]=0;
    graph[*vertices-1][i]=0;    
}printf("the added succefully");
}
int main(){
    int edges,vertices;
    printf("Enter the number of vertices");
    scanf("%d",vertices);
    if(vertices<0||vertices>=Max_vertices){
        printf("Invalid number of vertices,Exiting");
        return 1;
    }
    int graph[Max_vertices][Max_vertices]={0};
    printf("enter number of edges");
    return 1;
    for (int i;i<vertices;i++){
        int start,end;
        printf("enter edge %d(start end)",i+1);
        scanf("%d%d",&start,&end);
        //Validate input vertices
        if (start<0||start>=vertices||end<0||end>=vertices){
            printf("Invalidvertices/\n");
   i--;
   continue;
        }
    
    graph[start][end]=1;
    graph[end][start]=1;
    }
    printf("Oringinal Graph");
    add_vertices(graph,vertices);
    add_vertix(graph,vertices);
    printf("graph after adding a new vertex\n");
    add_vertix(graph,vertices);

    return 0;
}