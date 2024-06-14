
#include<stdio.h>
#define INF 999 
int minDistance(int d[], int visit[]){
    int min = INF, index;
    for(int i = 0; i < 4; i++){
        if(visit[i] == 0 && d[i] <= min){
            min = d[i];
            index = i;
        }
    }
    return index;
}
void graph(int arr[4][4], int s){
    int d[4];
    for(int i = 0; i < 4; i++){
        d[i] = INF;
    }
    d[s] = 0;
    
    int visit[4] = {0};
    for(int v = 0; v < 4 - 1; v++){
        int u = minDistance(d, visit);
        visit[u] = 1; 
        for(int i = 0; i < 4; i++){
            if(!visit[i] && arr[u][i] && d[u] != INF && d[u] + arr[u][i] < d[i]){
                d[i] = d[u] + arr[u][i];
            }
        }
    }
    printf("Vertex   Distance from Source\n");
    for(int i = 0; i < 4; i++){
        printf("%d        %d\n", i, d[i]);
    }
}

int main(){
    int arr[4][4] = {{0, 2, 0, 1}, {0, 0, 0, 2}, {2, 0, 0, 0}, {0, 0, 1, 0}};
    graph(arr, 0);
    return 0;
}


