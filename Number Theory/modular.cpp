#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int fact=0;
	if(a>b){
		swap(a,b);
	}
	for(int i=a;i<=b;i++){
		fact=((a%c)+(b%c))%c;
	}
	cout<<fact;
}
