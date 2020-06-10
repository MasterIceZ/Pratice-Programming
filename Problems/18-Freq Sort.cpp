#include<bits/stdc++.h>
using namespace std;
struct A {
    int freq=0;
    int val;
    bool operator < (const A&o) const {
        if (freq !=o.freq) return freq>o.freq;
        return val<o.val;
        }
    };
A a[1010];
int main () {
    int q,n,i,num,cnt=0;
    scanf("%d %d",&q,&n);
    for(i=0; i<q; i++) {
        scanf("%d",&num);
        a[num].freq++;
        a[num].val = num;
        }
    sort(a,a+q);
    for(i=0; i<n; i++) {
        while(a[i].freq--) {
            printf("%d ",a[i].val);
            }
        }
    return 0;
    }
