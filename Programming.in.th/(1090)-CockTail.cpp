#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[100100];
//int mark[100100];
int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,i,j,num,want;
    ll cnt= 0;
    cnt = 0;

    cin >> n;
    for(i=0;i<n;i++){
        cin >> num ;
        a[num]++;
    }
    cin >> want;
    for(i=0;i<=want/2;i++){
        j = want-i;
        /*
        if(mark[i]==1 || mark[j]==1)
            continue;
        */
        if(a[i]<=0)
            continue;
        if(a[j]<=0)
            continue;
        if(i!=j)
            cnt += (ll)a[i]*a[j];
        else
            cnt += (ll)(a[i]*(a[i]-1))/2;
        //mark[i]++,mark[j]++;
    }
    cout << cnt;
    return 0;
}
