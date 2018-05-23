#include<stdio.h>
#include<iostream>
using namespace std;

int reverse(int arr[], int d, int n){
    while(d<n){
        int temp = arr[d];
        arr[d] = arr[n];
        arr[n] = temp;
        d++ ; n--;

    }
}

int rotate(int arr[], int d, int n){
    reverse(arr, 0, d-1);
    for(int i = 0; i<n; i++ ){
        cout<<arr[i];
    }cout<<" ";
    reverse(arr, d, n-1);
    for(int i = 0; i<n; i++ ){
        cout<<arr[i];
    }cout<<" ";
    reverse(arr, 0, n-1);
}

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    rotate(arr, d, n);
    for(int i = 0; i<n; i++ ){
        cout<<arr[i];
    }
    return 0;
}
