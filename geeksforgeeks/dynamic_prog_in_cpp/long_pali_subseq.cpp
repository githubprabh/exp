#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

int max(int a, int b){
	if(a>b) return a;
	else return b;
}
long long int a[1005][1005];
int main(){
    long long int t;
    cin>>t;
    while(t--)
    {
    fflush(stdin);
	string s;
	getline(cin,s);
	//cin>>s;
	long long int l = s.length();
//memset(a,0,sizeof(a));
    for( int i=0;i<l;i++){
		for(int j=0;j<l;j++){
            a[i][j] = 0;
		}}

	for( int i=0;i<l;i++){
		for(int j=0;j<l;j++){
             if(i==j) a[i][j] = 1;
		}}
    long long int some;
    long long int len = l;
	for( some=2;some<=len;some++){
   
	for( int i=0;i<l;i++){
        long long int j=i+some-1;
        if(j < l){
        //cout<<"j== "<<i<<" "<<j<<endl;
        if(s.at(i) == s.at(j)){
            a[i][j] = a[i+1][j-1] + 2;
        }
		else{
			a[i][j] = max(a[i][j-1] , a[i+1][j]);
            }
			}
			}
    }
    /*for(int i=0;i<l;i++){cout<<endl;
        for(int j=0;j<l;j++)
        cout<<a[i][j]<<" ";
    }*/
    fflush(stdin);
    cout<<a[0][l-1]<<endl<<flush;
    }
    return 0;
}
