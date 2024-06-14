#include<stdio.h>
#define S 4
#define IN 999
int minDistance(int dist[S],int visit[S]){
	int min=IN;
	int min_index;
	for(int i=0;i<S;i++){
		if(visit[i]==0 && dist[i]<=min){
			min=dist[i];
			min_index=i;
		}
	}
	return min_index;
}
void graph(int cost[S][S],int src){
	int visit[S];
	int dist[S],amount;
	int parent[S];
	int totalcost;
	for(int i=0;i<S;i++){
		visit[i]=0;
		parent[i]=-1;
		dist[i]=IN;
	}
	visit[src]=1;
	dist[src]=0;
	for(int a=0;a<S-1;a++){
	int m=minDistance(dist,visit);
	visit[m]=1;
	for(int b=0;b<S;b++){
		if(!visit[b] && cost[a][b] && cost[a][b]<dist[b]){
			parent[b]=m;
			dist[b]=cost[a][b];
		}
	}             
	                    } 
    printf("Edge   cost\n");
    for (int i = 0; i < S; i++) {
        printf("%d  = %d\n", i, cost[i][parent[i]]);
        totalcost += cost[i][parent[i]];
    }
    printf("Total cost = %d",totalcost);
}
int main(){
	int cost[S][S]={{0,2,3,1},{2,0,0,2},{3,0,0,1},{1,2,1,0}};
	graph(cost,0);
	return 0;
}