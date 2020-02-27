#include<bits/stdc++.h>
using namespace std;
string convert(int number,int base){
	string bases="0123456789ABCDEF";
	string result="";
	while(number>0){
		result=bases[number%base]+result;
		number/=base;
	}
	return result;
}
int main(){
	int n,b;
	cin>>n>>b;
	cout<<convert(n,b)<<endl;
	return 0;
}
