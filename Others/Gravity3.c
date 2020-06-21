#include<stdio.h>
int cnt1[110],cnt2[110];
int n;
char a[110][110];
//void deb1();
//void deb2();
void draw(){
	int i,j,test;
	for(j=0;j<n;j++){
		for(i=n-1;i>=0;i--){
			if(cnt2[j]!=0){
				a[i][j] = '#';
				cnt2[j]--;
			}
			else
				a[i][j] = '.';
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}

int main (){
	int i,j;
	char a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf(" %c",&a);
			if(a=='#')
				cnt1[i]++;
		}
	}
	//deb1();
	for(j=0;j<n;j++){
		for(i=n-1;i>=0;i--){
			if(cnt1[i]>0){
				cnt2[j]++;
				cnt1[i]--;
			}
		}
	}
	//deb2();
	draw();
}
/*
void deb1(){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",cnt1[i]);
	}
	printf("\n\n");
}
void deb2(){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",cnt2[i]);
	}
	printf("\n\n");
}
*/
/**
5
##...
..###
.....
#.#.#
.##..

##...
###..
.....
###..
##...
*/
