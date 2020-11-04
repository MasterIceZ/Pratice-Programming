#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define int long long
#define sim template<typename T
#define ii first
#define jj second
sim>void __test(vector<T>v){for(auto x : v){cout << x << " ";}cout << endl;}
int gcd(int a,int b){if(a==0){return b;} if(b==0){return a;} return gcd(b%a,b);}
int lcm(int a,int b){return a*b/gcd(a,b);}
std::string reverse(string s){int n = s.size(),cnt=0; std::string rev = s; for(int i=n-1;i>=0;--i)rev[cnt++] = s[i]; return rev;}
typedef long long ll;
bool __Q=0;
int n,m;
const int INF = 2e18;
int dist(pair<int,int>a,pair<int,int>b){
	return abs(a.ii-b.ii)+abs(a.jj-b.jj);
}
void solution(){
	cin >> n;
	vector<pair<int,int>>v(n);
	for(int i=0;i<n;++i){
		cin >> v[i].ii >> v[i].jj;
	}
	int ans = INF;
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			int now = 0;
			for(int k=0;k<n;++k){
				if(i==k || j==k){
					continue;
				}
				else{
					now += min(dist(v[i],v[k]),dist(v[j],v[k]));
				}
			}
			ans = min(ans,now);
		}
	}
	cout << ans;
	return ;
}

int32_t main (){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T=1;
	if(__Q){
		cin >> T;
	}
	do{
		solution();
		cout << '\n';
	}while(--T);
	return 0;
}
