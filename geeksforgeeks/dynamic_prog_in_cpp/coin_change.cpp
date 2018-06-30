#include <iostream>
#include <bits/stdc++.h>

#define rep(i,a,b) for(int i=a;i<b;i++)

using namespace std;

long int a[400][400];
long int b[400];

int output(int n,int total){
	rep(i,0,n+1){
		rep(j,0,total+1){
			if(i == 0) a[0][j] = 0;
			//if(i == 1) a[1][j] = 1;
			if(j<1) a[i][j] = 1;

			if(i>=1 && j>=1) {
                if(b[i]>j) a[i][j] = a[i-1][j];
            	else
				a[i][j] =  a[i-1][j]  + a[i][j-b[i]] ;
			}
		}
	}
	/*for(int i=1;i<n+1;i++){
            cout<<endl;
        for(int j=1;j<total+1;j++){
            cout<<a[i][j]<<" ";
        }
	}*/
	return a[n][total];
}

int main(){
	int t;
	cin>>t;
	while(t--){
	memset(a,0, sizeof(a));
	memset(b,0, sizeof(b));
	
		long int n,total;
		cin>>n;

		rep (i,1,n+1) cin>>b[i];
		sort(b,b+n+1);
		cin>>total;
		//int total;
		//cin>>total;



		cout<<output(n,total)<<endl;


	}
}

