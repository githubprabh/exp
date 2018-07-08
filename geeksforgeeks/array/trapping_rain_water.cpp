#include<iostream>
#include<math.h>
#include<limits.h>

using namespace std;

int solve(int arr[],int n){
	int left_max = 0, right_max = 0, result = 0;
	int l = 0, h = n-1;
	while(l<=h){
		if(arr[l] < arr[h]){
			if(arr[l] > left_max) left_max = arr[l];
			else result = result + (left_max - arr[l]);
			l++;
		}
		else {
			if(arr[h] > right_max) right_max = arr[h];
			else result = result + (right_max - arr[h]);
			h--;
		}
	}
	return result;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<solve(a,n)<<endl;
}
}
