#include<bits/stdc++.h>
using namespace std;
#define i64 long long
i64 big_mod(i64 b,i64 p,i64 m){
	if(p==0)return 1;
	else if(p%2==1){
		i64 p1=b%m;
		i64 p2=(big_mod(b,p-1,m))%m;
		return (p1*p2)%m;
	}
	else if(p%2==0){
		i64 p1=(big_mod(b,p/2,m))%m;
		return (p1*p1)%m;
	}
}
int main(){
	i64 b,p,m;
	while(cin>>b>>p>>m)
	cout<<big_mod(b,p,m)<<endl;
}
