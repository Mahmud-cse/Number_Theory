#include<bits/stdc++.h>
using namespace std;
using ll=long long;

//vector<int>primes;
//bitset<100000>bs;
//
//void sieve(ll n) {
//    primes.erase(primes.begin(), primes.end());
//    bs.set();
//    bs[0] = bs[1] = 0;
//    primes.push_back(2);
//    for(ll i = 3; i <= n + 1; i += 2) {
//        if(bs[i]) {
//            for(ll j = i * i; j <= n+ 1; j += 2*i)
//                bs[j] = 0;
//            primes.push_back((int) i);
//        }
//		}
//	for(int i=0;i<n;i++){
//		if(primes[i]<=n){
//			cout<<primes[i]<<endl;
//		}else{
//			break;
//		}
//	}
//}

int countDivisor(int n){
	int divisor=0;
	for(int i=1;i*i<=n;i++){
		if(i*i==n){
			divisor+=1;
		}else if(n%i==0){
			divisor+=2;
		}
	}
	return divisor;
}

int divisorSum(int n){
	int cnt=0;
	for(int i=1;i*i<=n;i++){
		if(i*i==n){
		  cnt+=2*n;	
		}else if(n%i==0){
			cnt+=(i+n/i);
		}
	}
	return cnt;
}
int main(){
//	sieve(33);
int d=countDivisor(24);
cout<<d<<endl;
int s=divisorSum(24);
cout<<s<<endl;
	return 0;
}
