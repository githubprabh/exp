#include<stdio.h>
#include<iostream>
using namespace std;
void fx(string s,int l){
    if(l == s.size()){
        cout<<s<<" ";
        return ;
    }
    if(s[l] == '?'){
        s[l] = '0';
        fx(s,l+1);
        //cout<<s<<endl;
        s[l] = '1';
        fx(s,l+1);
        //cout<<s<<endl;
    }
    else {
        fx(s,l+1);
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t ;i++){
        string s;
        cin>>s;
        //cout<<s[i];
        fx(s,0);
        cout<<endl;
    }
    //cout<<count;
    return 0;
    }
