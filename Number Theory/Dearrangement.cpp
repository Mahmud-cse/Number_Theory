#include<bits/stdc++.h>
using namespace std;
int num=pow(10,9)+7;
#define ll long long
ll countD(ll n){
	ll de[n+1];
	de[0]=1;
	de[1]=0;
	de[2]=1;
	
	for(int i=3;i<=n;i++){
		de[i]=((i-1)*(de[i-1]+de[i-2]))%num;
	}
	return de[n];
	
}
int main(){
	int t;
	cin>>t;
	ll n;
	while(t--){
		cin>>n;
		printf("%lld\n",countD(n));
	}
	return 0; 
}
