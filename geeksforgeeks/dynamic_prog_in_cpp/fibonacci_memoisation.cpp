#include<iostream>
using namespace std;

int store[10];


int fib(int n){
	if(n < 2){
		store[0] = 1;
		store[1] = 1;
		return n;
	}
	else{
		cout<<"here1"<<endl;
		if(store[n] != -1){
			cout<<"here3"<<endl;
			return store[n];
		}
		else{
			cout<<"here2"<<endl;
			store[n] = fib(n-1) + fib(n-2);
			cout<<store[n]<<" "<<n<<endl;
			return store[n];
		}
	}
}


int main(){
	int n;
	cin>>n;
	int i;
	for(i=0;i<10;i++){
	store[i] = -1 ;
}
	cout<<fib(n)<<endl;
}
