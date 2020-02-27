#include<bits/stdc++.h>
using namespace std;
///lucas theorem///
int nCrDP(int n,int r,int p){
	int c[r+1];
	memset(c,0,sizeof(c));
	c[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=min(i,r);j>0;j--){
			c[j]=(c[j]+c[j-1])%p;
		}
	}
	return c[r];
}
int nCrLucas(int n,int r,int p){
	if(r==0){
		return 1;
	}
	int ni=n%p,ri=r%p;
	
	return (nCrLucas(n/p,r/p,p)*nCrDP(ni,ri,p))%p;
}
int main(){
	int n,r,p;
	cin>>n>>r>>p;
	cout<<"Value of nCr%p is : "<<nCrLucas(n,r,p);
	return 0;
}
