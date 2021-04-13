#include<bits/stdc++.h>
using namespace std;

const int MxN = 2e6+10;
struct Node{
	int v, w;
	bool operator < (const Node& o) const{
		return w > o.w;
	}
};
vector<Node>graph[MxN];
priority_queue<Node>pq;
int dist[MxN];
bool visited[MxN];


int32_t main (){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, m;
	cin >> n >> m;
	for(int i=0; i<m; ++i){
		int u, v, w;
		cin >> u >> v >> w;
		graph[u].push_back({v, w});
		graph[v].push_back({u, w});
	}
	int start, stop;
	cin >> start >> stop;
	pq.push({start, 0});
	while(!pq.empty()){
		Node now = pq.top();
		if(visited[now.v]){
			continue;
		}
		visited[now.v] = true;
		dist[now.v] = now.w;
		for(Node x : graph[now.v]){
			pq.push({x.v, now.w+x.w});
		}
	}
	cout << dist[stop] << endl;
	return 0;
}
