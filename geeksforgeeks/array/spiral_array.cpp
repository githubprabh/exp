#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
	//
int a[16];
		for(int i=0;i<16;i++){
		    cin>>a[i];
		}

		for(int i=0;i<4;i++){
		    cout<<a[i]<<" ";
		}
	    cout<<a[7]<<" "<<a[11];
		for(int i=15;i>11;i--){
		    cout<<" "<<a[i];
		}
		cout<<" "<<a[8];
		for(int i=4;i<7;i++){
		    cout<<" "<<a[i];
		}
		cout<<" "<<a[10]<<" "<<a[9]<<endl;

	}
}
