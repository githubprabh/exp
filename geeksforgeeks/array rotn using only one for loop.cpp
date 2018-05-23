#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    for(int i=d; i<d+n; i++){
        cout<<arr[i%n];
    }

}
