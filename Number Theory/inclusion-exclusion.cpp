#include<bits/stdc++.h>
using namespace std;
int count(int n,int a,int b){
	int count1=n/a;
	int count2=n/b;
	int count3=(n/(a*b));
	return count1+count2-count3;
}
int main(){
	int n,a,b;
	cin>>n>>a>>b;
	cout<<count(n,a,b)<<endl;
	return 0;
}
