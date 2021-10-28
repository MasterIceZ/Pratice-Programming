#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int a[10010];

int partition(int l, int r){
	int pivot = a[r];
	int i = l - 1;
	for(int j=l; j<=r-1; ++j){
		if(a[j] <= pivot){
			++i;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[r]);
	return i + 1;
}

void Sort(int l, int r){
	if(l >= r){
		return ;
	}
	int pivot = partition(l, r);
	Sort(l, pivot - 1);
	Sort(pivot + 1, r);
}

int main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i){
		cin >> a[i];
	}
	Sort(1, n);
	for(int i=1; i<=n; ++i){
		cout << a[i] << " ";
	}
	cout << "\n";
	return 0;
}
