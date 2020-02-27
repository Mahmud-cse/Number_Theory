#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll count(ll n){
	if(n<0){
		return 0;
	}
	if(n<=1){
		return 1;
	}
	///Kamenetsky’s formula///
	double x=((n*log10(n/M_E)+log10(2*M_PI*n)/2.0));
	
	return floor(x)+1;
}
int main(){
	ll n;
	cin>>n;
	ll t;
	while(n--){
		cin>>t;
		printf("%lld\n",count(t));
	}
	return 0;
}
