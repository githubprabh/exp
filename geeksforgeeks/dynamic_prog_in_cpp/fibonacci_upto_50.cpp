#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long int store[1000];


long long int fib(int n){
	if(n < 2){
		store[n] = 1;
		return store[n];
	}
	else{
		if(store[n] == -1){
			//calculate
			store[n] = fib(n-1) + fib(n-2);
			return store[n];
		}
		else{
			//already present
			return store[n];
		}
	}
}

int main(){
	int t;
	cin>>t;
	memset(store,-1,sizeof(store));
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		cout<<fib(i)<<endl;

	}
}
