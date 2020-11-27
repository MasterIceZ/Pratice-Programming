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

void DFS(int a){
    memset(visited,false,sizeof visited);
    memset(parent,-1,sizeof parent);
    stack<int>q;
    q.push(a);
    while(!q.empty()){
        int now = q.top();
        q.pop();
        if(visited[now]){
            continue;
        }
        visited[now] = true;
        cout << "Now Visiting : " << now << " ,Parent : " << parent[now] << endl;
        for(int i=0;i<deg[now];++i){
            int v = adj[now][i];
            if(!visited[v]){
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
    DFS(f); 
    return 0;
}