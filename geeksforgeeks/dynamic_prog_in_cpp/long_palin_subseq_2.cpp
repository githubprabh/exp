#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    for(int p=0;p<t;p++)
    {
        cin>>s;
        int n=s.length();
        int dp[n][n];
        for(int i=0;i<n;i++)
        dp[i][i]=1;
        for(int l=2;l<=n;l++)
        {
            for(int i=0;i<n-l+1;i++)
            {
                int j=i+l-1;
                if(s[i]==s[j] and l==2)
                dp[i][j]=2;
                else if(s[i]==s[j])
                dp[i][j]=2+dp[i+1][j-1];
                else if(s[i]!=s[j])
                dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
                
            }
        }
        cout<<dp[0][n-1]<<endl;
    }
    return 0;
}
