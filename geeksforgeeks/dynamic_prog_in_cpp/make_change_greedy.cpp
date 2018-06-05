#include<stdio.h>
#include<iostream>
using namespace std;
int count1 = 0,count5 = 0, count10 = 0;
int count25 = 0;
int mc(int n){
	if( n == 0){
		return n;
	}
	else if(n >= 1 && n < 5) {
		//cout<<"here1"<<endl;
		count1++;
		mc(n-1);
	}
	else if(n >= 5 && n < 10){ 
		count5++;
		mc(n%5);
	}
	else if(n >= 10 && n < 25) {
		for(int i=n/10; i>0; i--){
			count10++;
		}
		mc(n%10);
	}
	else if(n >= 25 && n < 50){
		for(int i=n/25; i>0; i--){
			count25++;
		}
		mc(n%25);
	}
	else if(n == 50){
		return n;
	}
}

int main(){
	int n;
	cin>>n;
	mc(n);
	cout<<"1->"<<count1<<endl<<"5->"<<count5<<endl<<"10->"<<count10<<endl;
	cout<<"25->"<<count25<<endl;
}
