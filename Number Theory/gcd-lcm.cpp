#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(a%b==0)return b;
	return gcd(b,a%b);
}
int lcm(int a,int b){
	return a*b/gcd(a,b); 
}
int main()
{
	int s=gcd(12,144);
	cout<<s<<endl;
	int d=lcm(12,144);
	cout<<d<<endl;
	return 0;
}
