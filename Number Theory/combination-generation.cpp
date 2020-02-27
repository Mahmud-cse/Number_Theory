#include<bits/stdc++.h>
using namespace std;
void combinationp(int arr[],int n,int r,int index,int data[],int i);
void printCombination(int arr[],int n,int r){
	int data[r];
	combinationp(arr,n,r,0,data,0);
}
void combinationp(int arr[],int n,int r,int index,int data[],int i){
	if(index==r){
		for(int j=0;j<r;j++){
			cout<<data[j]<<" ";
		}
		cout<<endl;
		return;
	}
	if(i>=n){
		return;
	}
	data[index]=arr[i];
	combinationp(arr,n,r,index+1,data,i+1);
	combinationp(arr,n,r,index,data,i+1);
}
int main(){
	int arr[]={1,2,3,4,5};
	int r=3;
	int n=sizeof(arr)/sizeof(arr[0]);
	printCombination(arr,n,r);
	return 0;
}
