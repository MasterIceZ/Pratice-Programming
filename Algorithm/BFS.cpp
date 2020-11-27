#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> adj[10010];
int deg[10010];

void Insert_Graph(){
    memset(deg,0,sizeof deg);
    cin >> n;
    for(int i=0;i<n;++i){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        deg[u]++;
        adj[v].push_back(u);
        deg[v]++;
    }
}

bool visited[10010];
int parent[10010];
int layer[10010];

void BFS(int a){
    memset(visited,false,sizeof visited);
    memset(parent,-1,sizeof parent);
    memset(layer,-1,sizeof layer);
    queue<int>q;
    q.push(a);
    layer[a] = 0;
    while(!q.empty()){
        int now = q.front();
        q.pop();
        if(visited[now]){
            continue;
        }
        visited[now] = true;
        cout << "Now Visiting : " << now << " ,Parent : " << parent[now] << endl;
        for(int i=0;i<deg[now];++i){
            int v = adj[now][i];
            if(!visited[v]){
                if(layer[v] == -1){
                    layer[v] = layer[now]+1;
                }
                parent[v] = now;
                q.push(v);
            }
        }
    }
}

int32_t main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    Insert_Graph();
    int f;
    cin >> f;
    BFS(f); 
    return 0;
}
