#include<stdio.h>
#include<iostream>
using namespace std;
int solve(int n){
	
	if(n%2 == 0 && n/2 != 0){
		solve(n/2);
	}
	else if(n%3 == 0 && n/3 != 0){
		solve(n/3);
	}
	else if(n%5 == 0 && n/5 != 0){
		solve(n/5);
	}
	else {if(n/2 == 0 || n/3 == 0 || n/5 == 0) return true ;
	else return false;
}
}
int main(){
	int n; cin>>n; int a[n];
	for(int i=0; i<n; i++){
		if(i<6){
			a[i] = i+1;
		}
		else{
			int count = 1;
			//for(int j = (a[i-1]) + 1; j>0 ; j++){
				//count = 0;
			int j = a[i-1] + 1;
			cout<<j<<endl;
			while(count){
					if(solve(j)) 
						{
							a[i] = j;
							count--;
				        }
				    else{
				    	j++;
				    }    
			
			}
		}
	}
	for(int i=0; i<n; i++)
	cout<<i+1<<" "<<a[i]<<endl;
}
