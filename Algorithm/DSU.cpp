/*
 * Disjoined Set Union
 */
#include<iostream>
using namespace std;

const int MxN = 10010;
int parent[MxN];

int find_root(int u){
    if(parent[u]==u){
        return u;
    }
    parent[u] = find_root(parent[u]);
    return parent[u];
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<MxN;++i){
        parent[i] = i;
    }
    int n;cin >> n;
    for(int i=0;i<n;++i){
        int u,v;
        cin >> u >> v;
        parent[find_root(u)] = find_root(v);
    }
    int q;
    cin >> q;
    while(q--){
        int u,v;
        cin >> u >> v;
        if(find_root(u)==find_root(v)){
            cout << "Same Set";
        }
        else{
            cout << "Diffrent Set";
        }
        cout << endl;
    }
    return 0;
}
