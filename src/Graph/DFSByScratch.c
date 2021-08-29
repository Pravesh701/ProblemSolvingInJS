#include<stdio.h>
#include<stdlib.h>
struct Graph{
	int V;
	int E;
	int **Adj;
};

int Visited[4];
void DFS(struct Graph *G, int u){
	Visited[u] = 1;
	printf("%d ",u);
	for(int v = 0; v < G->V; v++){
		if(!Visited[v] && G->Adj[u][v]){
			DFS(G, v);
		}
	}
}

struct Graph *createGraph(){
	int i, u, v;
	struct Graph *G = (struct Graph *)malloc(sizeof(struct Graph));
	if(!G){
		printf("Memory Error \n");
	}
	printf("Enter No. Of nodes and edges \n");
	scanf("%d%d",&G->V,&G->E);
	G->Adj = malloc(sizeof(G->V * G->E));
	for(u=0; u<G->V; u++){
		for(v=0; v<G->V; v++){
			G->Adj[u][v] = 0;
		}
	}
	printf("Enter no. of edges \n");
	for(i=0; i<G->E; i++){
		scanf("%d%d",&u,&v);
		G->Adj[u][v] = 1;
		G->Adj[v][u] = 1;
	}
	return G;
}

int main(){
	struct Graph * G = createGraph();
	DFS(G, 0);
	return 0;
}















