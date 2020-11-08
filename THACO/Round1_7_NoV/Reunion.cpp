#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define int long long
#define double long double
#define sim template<typename T
#define fi first
#define se second

#define pii pair<int,int>
#define pb push_back
#define sz(x) (int)(x).size()
#define all(x) (x).begin(),(x).end()
#define ub upper_bound
#define lb lower_bound
#define dec(_) cout << fixed << setprecision(_)

sim>void __test(vector<T>v){
	for(auto x : v){
		cout << x << " ";
	}
	cout << endl;
}
sim>T dp_qs(vector<T>dp,int nax){
	for(int i=1;i<=nax;++i){
		dp[i] += dp[i-1];
	}
	return dp;
}

int gcd(int a,int b){
	if(a==0){
		return b;
	} 
	if(b==0){
		return a;
	} 
	return gcd(b%a,b);
}
int lcm(int a,int b){
	return a*b/gcd(a,b);
}
string reverse(string s){
	int n = s.size(),cnt=0; 
	string rev = s; 
	for(int i=n-1;i>=0;--i){
		rev[cnt++] = s[i];
	}
   	return rev;
}
void writeCase(int _){
	cout << "Case #" <<  _ << ": \n"; 
}
typedef long long ll;
bool __Q=0;
bool __writecase=0;
int n,m;
const int INF = 2e18;
struct Cir{
	double x,y,r;
	int mark = 0;
	int cg=0;
};
void solution(){
	cin >> m >> n;
	vector<pair<double,double>> v(m);
	for(int i=0;i<m;++i){
		double x,y;
		cin >> x >> y;
		v[i] = make_pair(x,y);
	}	
	Cir wall[n];
	for(int i=0;i<n;++i){
		cin >> wall[i].x >> wall[i].y >> wall[i].r;
	}
	int cnt = 0;
	for(int i=0;i<m;++i){
		for(int k=0;k<n;++k){
			if(pow(wall[k].x-v[i].first,2)+pow(wall[k].y-v[i].second,2) >= pow(wall[k].r,2)){
				wall[k].cg++;		
			}
		}	
	}
	for(int i=0;i<n;++i){
		if(wall[i].cg==m){
			continue;
		}
		if(wall[i].cg!=0){
			cnt++;
		}
	}
	cout << cnt;
	return ;
}

int32_t main (){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T=1;
	int _____=0;
	if(__Q){
		cin >> T;
	}
	do{
		if(__writecase){
			writeCase(_____++);
		}
		solution();	
		cout << '\n';
	}while(--T);
	return 0;
}
