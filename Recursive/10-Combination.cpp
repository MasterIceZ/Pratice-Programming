#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define int long long
#define pii pair<int,int>
#define FOR(i,n,k) for(int i=n; i<k; ++i)
#define ROF(i,n) for(int i=n; i>-1; --i)
#define V_IN(v); for(auto& x : v){cin >> x;}
#define V_1IN(v,n) for(int i=1;i<=n;++i){cin>>v[i];}
int gcd(int a,int b){if(a%b==0)return b; return gcd(b%a,b);}
int lcm(int a,int b){return a*b/gcd(a,b);}
std::string reverse(string s){int n = s.size(),cnt=0; std::string rev = s; for(int i=n-1;i>=0;--i)rev[cnt++] = s[i]; return rev;}
typedef long long ll;
const int INF = 2e18;
int n,r,k,ans[15],mark[15],cnt;
void play(int state,int number){
	if(state>=r){
		if(cnt==k){
			for(int i=0;i<r;++i){
				cout << ans[i] << space;
			}
			exit(0);
		}
		cnt++;
		return ;
	}
	for(int i=number;i<=n;++i){
		if(mark[i]){
			continue;
		}
		mark[i]=1;
		ans[state] = i;
		play(state+1,i);
		mark[i]=0;
	}
}
int32_t main (){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> r >> k;
	--k;
	play(0,1);
	cout << endl;
	return 0;
}
