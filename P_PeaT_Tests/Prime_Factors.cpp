#include <bits/stdc++.h>
using namespace std;
bool isPrime(int k){
    if(k%2==0){
        return false;
    }
    for(int i=3;i<=sqrt(k);++i){
        if(k%i==0){
            return false;
        }
    }
    return true;
}
int32_t main (){
    vector<long long>v;
    long long n,cnt=0;
    bool Prime;
    cin >> n;
    while(n%2==0){
        n/=2;
        v.push_back(2);
    }
    for(long long i=3;i<=n;i+=2){
        if(!isPrime(i)){
            continue;
        }
        while(n%i==0){
            n/=i;
            v.push_back(i);
        }
    }
    for(auto x : v){
        if(cnt!=0){
            cout << "x ";
        }
        cout << x << " ";
        ++cnt;
    }
    return 0;
}
