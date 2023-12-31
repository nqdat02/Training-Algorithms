#include <bits/stdc++.h>
using namespace std;
struct Edge {
	int src, dest, weight;
};
struct Graph {
	int V, E; // vertex, edges 
	struct Edge* edge;
};
struct Graph* createGraph(int V, int E){
	struct Graph* graph = new Graph;
	graph->V = V;
	graph->E = E;
	graph->edge = new Edge[E];
	return graph;
}
void printArr(int dist[], int n){
	for (int i = 1; i <= n; ++i){
		if(dist[i] == INT_MAX){
			printf("INFI ");
			continue;
		}
		printf("%d ", dist[i]);
	}
	printf("\n");
}
void BellmanFord(struct Graph* graph, int src){
	int V = graph->V;
	int E = graph->E;
	int dist[V];

	for (int i = 1; i <= V; i++)
		dist[i] = INT_MAX; // vo cung
	dist[src] = 0;

	for (int i = 1; i <= V - 1; i++) {
		for (int j = 0; j < E; j++) {
			int u = graph->edge[j].src;
			int v = graph->edge[j].dest;
			int w = graph->edge[j].weight;
			if (dist[u] != INT_MAX && dist[u] + w < dist[v])
				dist[v] = dist[u] + w; 
		}
	}
	for (int i = 0; i < E; i++) {
		int u = graph->edge[i].src;
		int v = graph->edge[i].dest;
		int weight = graph->edge[i].weight;
		if (dist[u] != INT_MAX
			&& dist[u] + weight < dist[v]) {
			printf("-1\n");
			return; 
		}
	}
	printArr(dist, V);
	return;
}
int main(){
	int t; cin >> t;
	while(t--){
		int V, E, st; cin >> V >> E >> st;
		struct Graph* graph = createGraph(V, E);
		for(int i = 0; i < E; ++i){
			int u, v, w; cin >> u >> v >> w;
			graph->edge[i].src = u;
    		graph->edge[i].dest = v;
    		graph->edge[i].weight = w;
		}
		BellmanFord(graph, st);
	}

	return 0;
}
