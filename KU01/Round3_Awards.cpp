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
	vector<int>qst(n+1),qsl(n+1);
	vector<int>mark(2*n+1,0);
	vector<int>cntt(n+1),cntl(n+1);
	for(int i=1;i<=n;++i){
		int x;
		cin >> x;
		qst[i] = qst[i-1] + x;
		mark[x] = 1;
		cntt[i] += !x?1:0;
		cntt[i] += cntt[i-1];
	}
	for(int i=1;i<=n;++i){
		int x;
		cin >> x;
		qsl[i] += qsl[i-1] + x;
		mark[x] = 1;
		cntl[i] += !x?1:0;
		cntl[i] += cntl[i-1];
	}
	vector<int>qsz;
	qsz.push_back(0);
	for(int i=2*n;i>=1;--i){
		if(!mark[i]){
			qsz.push_back(i+qsz[qsz.size()-1]);
		}
	}
	int nax = -INF;
	for(int i=1;i<=n;++i){
		nax = max(nax,qst[i]+qsl[n]-qsl[i-1]+qsz[cntt[i]+cntl[n]-cntl[i-1]]);
	}
	cout << nax;
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
