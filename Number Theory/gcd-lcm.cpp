#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(b==0)return a;
	return gcd(b,a%b);
}
int lcm(int a,int b){
	LL g=gcd(a,b);
	return a/g*b;
}
int main()
{
	int s=gcd(12,144);
	cout<<s<<endl;
	int d=lcm(12,144);
	cout<<d<<endl;
	return 0;
}
