#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int solve(int arr[],int n){
    for (int i=0; i<n; i++)
		arr[i] = arr[i]*arr[i];
	sort(arr,arr+n);

	for(int i=n-1;i>=2;i--){
	int l=0;
	int r=i-1;
	//cout<<"here";
	while(l<r){
		if(arr[l] + arr[r] == arr[i]){ 
		//cout<<"here1";
        //cout<<arr[l]<<" "<<arr[r]<<" "<<arr[i];
		    return true;
		}
		(arr[l] + arr[r] < arr[i] ) ? l++ : r--;
	}
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	//
		int n;
		cin>>n;int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		solve(a,n) ? cout<<"Yes"<<endl:cout<<"No"<<endl;
	}
}
