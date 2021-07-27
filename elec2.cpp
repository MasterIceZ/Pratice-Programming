#include<bits/stdc++.h>
using namespace std;

const int MxN = 1010;

struct Edge{
	int u, v, w;
	bool operator < (const Edge& o) const{
		return w > o.w;
	}
};

int p[MxN];
int fr(int u){
	return p[u] == u ? u : p[u] = fr(p[u]);
}

void solve(){
	int n;
	string s;
	cin >> n >> s;
	vector<pair<int, int>> position;
	for(int i=1, x; i<=n; ++i){
		cin >> x;
		if(s[i - 1] == '1'){
			p[i] = 0;
		}
		else{
			p[i] = i;
		}
		position.emplace_back(x, i);
	}
	sort(position.begin(), position.end());
	priority_queue<Edge> pq;
	for(int i=0; i<position.size() - 1; ++i){
		pq.push({i, i+1, abs(position[i].first - position[i+1].first)});
	}
	int sum = 0;
	while(!pq.empty()){
		Edge now = pq.top();
		pq.pop();
		int ru = fr(position[now.u].second), rv = fr(position[now.v].second);
		if(ru == rv){
			continue;
		}
		sum += now.w;
		p[ru] = rv;
	}
	cout << sum ;
	return ;
}

int main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	int q;
	cin >> q;
	while(q--){
		solve();
		cout << "\n";
	}
	return 0;
}
