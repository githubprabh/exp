#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    ifstream fp;

    fp.open("test1.6.txt");
    if(fp.fail()){
        cerr << "error opening file" << endl;
    }

    int t;
    fp>> t;

    while(t--){
    int n, k;
    fp>> n >> k;
    int a[n], count = 0 ;

    for(int i=0 ; i<n ; i++ ){
        fp>>a[i];
        if (a[i] < 1) count++;
    }
    if( count >= k) cout <<count<<k<< "NO\n";
    else cout <<count<<k<< "YES\n";
    }


}

