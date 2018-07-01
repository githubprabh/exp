#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

long long int result_sum[200];


int main(){
	int t;
	cin>>t;
    //memset(result_sum, 0,sizeof(result_sum));

	while(t--){
		long int n;
		cin>>n;
	    long long int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			}
		for(int i=0;i<n;i++){
            result_sum[i] = a[i];
		}
        for(int i=1; i<n; i++){
			for(int j=i-1;j>=0;j--){
				if(a[i] > a[j] && result_sum[i] < a[i] + result_sum[j])
					result_sum[i] = a[i] + result_sum[j] ;
				}
			}

		long int max_sum = 0;
		for(int  i =0;i<n;i++){
            if(result_sum[i] > max_sum){
                max_sum = result_sum[i];
            }
		}
		cout<<max_sum<<endl;
		//cout<<*std::max_element(result_sum,result_sum+n)<<endl<<endl;
	}
}

