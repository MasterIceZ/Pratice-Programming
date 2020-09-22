#include <bits/stdc++.h>
using namespace std;
vector<int> knight(25) , workers(25);
void gencase(){
    knight[0] = 0;
    workers[0] = 1;
    int sum = knight[0] + workers[0] + 1;
    for(int i=1;i<=24;++i){
        workers[i] = sum;
        knight[i] = workers[i-1];
        sum = workers[i] + knight[i] + 1;
    }
}
int32_t main (){
    gencase();
    while(1){
        int opr;
        cin >> opr;
        if(opr==-1){
            return 0;
        }
        cout << workers[opr] << " " <<  workers[opr]+knight[opr]+1 << endl;
    }
    return 0;
}
