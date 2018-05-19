#include <iostream>                               // correct + segementation fault
#include <stack>
#include <string>
#include<bits/stdc++.h>
using namespace std;
long arr[100]={0};
long long sum1=0,sum2=0,sum3=0,max_ele;
struct stack1{
    long top1=-1;
    long a1[100];
}s1;
struct stack2{
    long top2=-1;
    long a2[100];
}s2;
struct stack3{
    long top3=-1;
    long a3[100];
}s3;

void push1(long x){
   s1.top1++;
   s1.a1[s1.top1]=x;
}
void push2(long x){
    s2.top2++;
    s2.a2[s2.top2]=x;
}
void push3(long x){
    s3.top3++;
    s3.a3[s3.top3]=x;
}


long pop1(long long sum){
    sum1=sum;
    sum1=sum1 - s1.a1[s1.top1];
    s1.top1--;
    //cout<<"top of s1 == "<<s1.a1[s1.top1];
    //cout<<"sum1 "<<sum1<<"\n";
    return sum1;
}
long pop2(long long sum){
    sum2=sum;
    sum2=sum2-s2.a2[s2.top2];
    s2.top2--;
    //cout<<"top of s2 == "<<s2.a2[s2.top2];
    //cout<<"sum2 "<<sum2<<"\n";
    return sum2;
}
long pop3(long long sum){
    sum3=sum;
    sum3=sum3-s3.a3[s3.top3];
    s3.top3--;
    //cout<<"top of s3 == "<<s3.a3[s3.top3];
    //cout<<"sum3 "<<sum3<<"\n";
    return sum3;
}

long check(long long sum1,long long  sum2,long long  sum3){
        if(sum1 == sum2 && sum2 == sum3  ){
            cout<<sum1<<"\n";
            //return 1;
        }
        else if (sum1==0&&sum2==0 &&sum3==0){
            cout<<0;
            //return 1;
        }
        else{

                if(sum1 >= sum2 &&  sum1 > sum3){
                    max_ele = sum1;
                    sum1 = pop1(sum1);
                    //cout<<"pop1\n";
                    //cout<<sum1<<" "<<sum2<<" "<<sum3;long
                    check(sum1,sum2,sum3);
                }
                else if(sum2 > sum1 && sum2 >= sum3){
                    max_ele = sum2;
                    sum2 = pop2(sum2);
                    //cout<<"pop2\n";
                    //cout<<sum1<<" "<<sum2<<" "<<sum3;
                    check(sum1,sum2,sum3);
                }
                else if(sum3 >= sum1 && sum3 > sum2){
                    max_ele = sum3;
                    sum3 = pop3(sum3);
                    //cout<<"pop3\n";
                    //cout<<sum1<<" "<<sum2<<" "<<sum3;
                    check(sum1,sum2,sum3);
                }

        }
        return 1;
}

int main(){
    //stack<long> s1;stack<int> s2;stack<int> s3;
    long a,b,c,max_ele;
    cin >> a>> b >>c;
    long s1[a];
    for(long i = 0; i<a ; i++){
       cin>>s1[i];

       sum1=sum1+s1[i];
       }
       for(long i=a;i>-1;i--){
        push1(s1[i]);
       }


    int s2[b];
    for(long i = 0; i<b ; i++){
            //cout<<"stack 2";
        cin>>s2[i];

        sum2=sum2+s2[i];}
        for(long i = b;i>-1;i--){
            push2(s2[i]);
        }


    long s3[c];
    for(long i = 0; i<c ; i++){
            //cout<<"stack 3";
        cin>>s3[i];

        sum3=sum3+s3[i];
        }
        for(long i=c;i>-1;i--){
            push3(s3[i]);
        }
        //cout<<sum1<<endl<<sum2<<endl<<sum3;
        check(sum1,sum2,sum3);

}

