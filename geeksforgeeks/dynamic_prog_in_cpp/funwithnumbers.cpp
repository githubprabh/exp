#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int gcd(int i,int j){
	if(j == 0) return i;
	else return (j,i%j);
}

int fun(int a,int b, int *arr[]){
	for(int i=1;i<a+1;i++){
		for(int j=1;i<b+1;j++){
			if(i==1&&j==1) continue;
			else{
				int val = gcd(i,j);
				if(!val){
					arr[i][j] = min( arr[i/val][j/val] , min ( arr[i-1][j], arr[i][j-1] ) ) + 1;
				}
				else{
					arr[i][j] = min ( arr[i-1][j], arr[i][j-1]) + 1 ;
				}
			}
		}
	}



	cout<<arr[a][b];
}

int main(int argc, char *argv[]){
	int t;
	cin>>t;
	while(t--){
		int a,b;cin>>a>>b;
		int arr[a+1][b+1];
		memset(arr,0,sizeof(arr));
		fun(a,b,(int **)arr);
	}
}
