namespace ice{
using namespace std;
template<class T> find_idx(vector<T>v,T fin){
	auto it = find(v.begin(),v.end(),fin);
	
	return distance(v.begin(),it);
}
template<class T> priority_queue<T> make_pq(vector<T>v){
	priority_queue<T> he;
	for(auto x : v){
		he.push(x);
	}
	return he;
}
template<class T> vector<T> bubble_sort(vector<T>v){
	priority_queue<T> he = make_pq(v);
	int n = (int)v.size();
	for(int k=0;k<n;++k){
		int now = find_idx(v,he.top());
		he.pop();
		while(now!=k){
			swap(v[now],v[now-1]);
			now--;
		}
	}
	return v;
}
void __dbg(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int>v(n);
	for(int i=0;i<n;++i){
		cin >> v[i];
	}
	v = bubble_sort(v);
	for(int i=n-1;i>=0;--i){
		cout << v[i] << " ";
	}
	cout << endl;
}
}
