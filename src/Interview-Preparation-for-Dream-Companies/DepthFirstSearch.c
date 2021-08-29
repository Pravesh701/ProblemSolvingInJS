#include <stdio.h>
#include <stdlib.h>
struct Graph{
    int V;
    int E;
    struct list **Adj;
};
struct list{
    int v;
    struct list *next;
    int marked;
};
struct Graph *createGraph(int V){
    int i;
    struct Graph *G = (struct Graph*)malloc(sizeof(struct Graph));
    G->V=V;
    G->Adj = (struct list**)malloc(sizeof(struct list*)*V);
    for(i=0;i<V;i++){
       G->Adj[i]=(struct list*)malloc(sizeof(struct list));
       G->Adj[i]->v=i;
       G->Adj[i]->next=NULL;
       G->Adj[i]->marked = 0;
    }
 return G;
}
void DFS(struct Graph *G, int i, int *A,int *index){
    struct list *head = G->Adj[i];
    if(head->marked)
        return;
    head->marked = 1;
    A[*index]= i;
   (*index)= (*index) + 1;
    head= head->next;
    while(head){
        DFS(G,head->v,A, index);
        head = head->next;
    }
}
int main()
{
    int i,V,E,u,v;
    int component = 0, index =0;
    printf("Enter # of nodes : ");
    scanf("%d",&V);
	printf("\nEnter # of edges : ");
    scanf("%d",&E);
    struct Graph *G=createGraph(V);
    G->E = E;
    int *A=(int *)malloc(sizeof(int)*V);
    printf("\nNote - Node numbers shall start from 0\n\n");
    for(i=0;i<G->E;i++){
        printf("Nodes for edge # %d : ",i+1);
        scanf("%d%d",&u,&v);
        struct list *newNode = (struct list*)malloc(sizeof(struct list));
        newNode->v=v;
        newNode->next = G->Adj[u]->next;
        G->Adj[u]->next = newNode;
    }
    for(i=0;i<G->V;i++){
        struct list *head = G->Adj[i];
        if(head->marked)
            continue;
        component++;
        index = 0;
        DFS(G,i,A,&index);
        printf("DFS order for component # %d is\n",component);
        int j =0;
        for(j=0;j<index;j++)
            printf("%d ",A[j]);
    }
    return 0;
}