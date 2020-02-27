#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int l,int r,int x){
	while(l<=x){
		int m=l+(r-l)/2;
		if(arr[m]==x){
			return m;
		}
		if(arr[m]<x){
			l=m+1;
		}
		if(arr[m]>x){
			r=m-1;
		}
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
 	int arr[n];
 	for(int i=0;i<n;i++){
 		cin>>arr[i];
	 }
	 int a=sizeof(arr)/sizeof(arr[0]);
	 int x=arr[2];
	 int result=binary_search(arr,0,a-1,x);
	 (result==-1)?cout<<"Elimant is not present":cout<<"Elimant is present "<<result;
	 return 0;
}
