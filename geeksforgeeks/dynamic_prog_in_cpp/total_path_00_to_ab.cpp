#include<iostream>
#include<math.h>
#include<limits.h>


using namespace std;

typedef long long int lli;
const int MAXN = 1003;
const lli MOD = 1000000007;



lli arr[105][105];

int main(int argc, const char * argv[]){
	int t;
	cin>>t;
	while(t--){
		lli a,b;
		cin>>a>>b;
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				if(i==0 || j == 0){
					arr[i][j] = 1;
				}
				else{
					arr[i][j] = ((arr[i][j-1] %(MOD)) + (arr[i-1][j] %(MOD)) %(MOD));
				}
			}
		}
		/*for(int i=0;i<a;i++){cout<<endl;
		for(int j=0;j<b;j++)
		cout<<arr[i][j]<<" ";}
		*/
		cout<<arr[a-1][b-1]%(MOD)<<endl;
	}
	return 0;
}
