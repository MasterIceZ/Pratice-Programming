#include <bits/stdc++.h>
using namespace std;
double land[5][5],answer;
int n,m,di[]={-1,-1,-1,0,0,1,1,1},dj[]={-1,0,1,-1,1,-1,0,1},mark[5][5]; 
void play(int i,int j,double sum,int state){
    sum += land[i][j];mark[i][j]=1;
    if(sum<answer && state==n*m){
        answer=sum;
    }
    for(int k=0;k<8;++k){
        int ii=i+di[k];int jj=j+dj[k];
        if(ii<0||jj<0||ii>=n||jj>=m){
            continue;
        }
        land[ii][jj]+=land[i][j]*0.1;
    }
    for(int k=0;k<n;++k){
        for(int l=0;l<m;++l){
            if(mark[k][l]!=1){
                play(k,l,sum,state+1);
            }
        }
    }
    mark[i][0]=0;sum-=land[i][j];
    for(int k=0;k<8;++k){
        int ii=i+di[k];int jj=j+dj[k];
        if(ii<0||jj<0||ii>=n||jj>=m){
            continue;
        }
        land[ii][jj]+=land[i][j]*0.1;
    }
}
int32_t main (){
    cin >> n >> m;
    answer = 1e9;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >> land[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            play(i,j,0,1);
        }
    }
    printf("%.2lf",answer);
    return 0;
}
