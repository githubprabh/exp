#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;





int main(){
    int n;
    cin>>n;

    for(int i=0 ; i<n ; i++){
            int spaces = n - (i+1);

        for( int j=0 ; j<n ; j++){

            if(spaces > j ) cout<<" ";
            else cout<<"#";}
            cout<<"\n";
        }
}
