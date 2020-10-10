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
int A,B,C;
int mark[22][22][22],answer[22];
void play(int a,int b,int c){
	if(a<0||b<0||c<0||a>A||b>B||c>C){
		return ;
	}
	if(a==0){
		answer[c]=1;
	}
	if(mark[a][b][c]){
		return ;
	}
	mark[a][b][c]=1;
	play(0,b+a,c);
	play(a-(B-b),B,c);
	play(0,b,c+a);
	play(a-(C-c),b,C);
	play(a+b,0,c);
	play(A,b-(A-a),c);
	play(a,0,c+b);
	play(a,b-(C-c),C);
	play(a+c,b,0);
	play(A,b,c-(A-a));
	play(a,b+c,0);
	play(a,B,c-(B-b));
}
int32_t main (){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> A >> B >> C;
	play(0,0,C);
	for(int i=0;i<=C;++i){
		if(answer[i]){
			cout << i << space;
		}
	}
	cout << endl;
	return 0;
}
