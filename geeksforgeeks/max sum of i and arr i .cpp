#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int find(int arr[], int n){
    int sum=0;
    int prev_val=0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
        prev_val = prev_val + (i*arr[i]);
    }
    int next_sum = prev_val;
    for(int i=0; i<n; i++)
    {
        next_sum = prev_val - (sum - arr[i - 1]) + (arr[i-1]*(n-1));
        prev_val = max(prev_val,next_sum);

    }

    return prev_val;

}

int main(){
    int arr[] = {8,3,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    // max sum of i*arr[i]
    // among all rotn

    cout<<find(arr,n)<<" ";
}
