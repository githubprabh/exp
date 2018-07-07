#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int size;
	    cin>>size;
	    int a[size], b[3] = {0};
	    //memset(b,0,sizeof(b));

	    for(int i=0;i<size;i++){
	        cin>>a[i]; b[a[i]]++;
	    }


	    for(int i=0;i<3;i++){
	        if(b[i] > 0){
	        for(int j=0;j < b[i] ;j++){
	            cout<<i<<" ";
	        }
	    }
	    }
	    cout<<endl;
	}
	return 0;
}
