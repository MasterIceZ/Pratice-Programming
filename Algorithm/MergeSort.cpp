#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int a[10010], tmp[10010];

void merge(int l, int mid, int r){
	int i = l, j = mid + 1, k = l;
	while(i <= mid && j <= r){
		if(a[i] <= a[j]){
			tmp[k++] = a[i++]; 
		}
		else{
			tmp[k++] = a[j++];
		}
	}
	while(i <= mid){
		tmp[k++] = a[i++];
	}
	while(j <= r){
		tmp[k++] = a[j++];
	}
	for(int i=l; i<=r; ++i){
		a[i] = tmp[i];
	}
}

void mergesort(int l, int r){
	if(l >= r){
		return ;
	}
	int mid = (l + r) / 2;
	mergesort(l, mid);
	mergesort(mid + 1, r);
	merge(l, mid, r);
}

int main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i){
		cin >> a[i];
	}
	mergesort(1, n);
	for(int i=1; i<=n; ++i){
		cout << a[i] << " ";
	}
	cout << "\n";
	return 0;
}
