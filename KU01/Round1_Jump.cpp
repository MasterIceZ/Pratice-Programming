#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define int long long
#define sim template<typename T
sim>void __test(vector<T>v){for(auto x : v){cout << x << " ";}cout << endl;}
int gcd(int a,int b){if(a==0){return b;} if(b==0){return a;} return gcd(b%a,b);}
int lcm(int a,int b){return a*b/gcd(a,b);}
std::string reverse(string s){int n = s.size(),cnt=0; std::string rev = s; for(int i=n-1;i>=0;--i)rev[cnt++] = s[i]; return rev;}
typedef long long ll;
bool __Q=0;
int n,m;
const int INF = 2e18;
void solution(){
	cin >> n;
	string s;
	cin >> s;
	vector<int>v(n);
	for(int i=0;i<n;++i){
		if(s[i]=='#'){
			v[i] = 1;
		}
		else{
			v[i] = 0;
		}
	}	
	for(int i=0;i<n;++i){
		if(v[i]==1){
			break;
		}
		if(n-1==i){
			cout << n ;
			return ;
		}
	}
	int ans = INF;
	for(int i=0;i<n;++i){
		if(v[i]==1){
			ans = min(max(n-i-1,i),ans);
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
