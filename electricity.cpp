/*
	AUTHOR	: Hydrolyzed~
	SCHOOL	: Rayongwittayakom
	CENTER	: Burapha University
	TASK	: Electricity
*/
#include<bits/stdc++.h>
using namespace std;

void solution(){
	int n;
	string s;
	cin >> n >> s;
	vector<pair<int, int>> line;
	for(int i=0, x; i<n; ++i){
		cin >> x;
		line.emplace_back(x, s[i] - '0');
	}
	sort(line.begin(), line.end());
	int found_1, found_2;
	found_1 = n - 1, found_2 = 0;
	for(int i=0; i<n; ++i){
		if(line[i].second == 1){
			found_1 = i;
			break;
		}
	}	
	for(int i=n-1; i>=0; --i){
		if(line[i].second == 1){
			found_2 = i;
			break;
		}
	}
	int ans = abs(line[0].first - line[found_1].first);
	ans += abs(line[n-1].first - line[found_2].first);
	vector<int> segment;
	for(int i=found_1 + 1; i<=found_2; ++i){
		segment.push_back(line[i].first - line[i - 1].first);
		if(line[i].second){
			sort(segment.begin(), segment.end());
			for(int j=0; j<segment.size() - 1; ++j){
				ans += segment[j];
			}
			segment.clear();
		}
	}
	cout << ans;
	// Time Complexity: O(n^2logn)
	return ;
}

int main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		solution();
		cout << "\n";
	}
	return 0;
}
