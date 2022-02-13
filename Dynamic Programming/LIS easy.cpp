#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){

    int n;
    cin>>n;
    vector<int>a(n);

    //LIS start
    vector<int>dp(n,0);
    for(int i=n-1 ; i>=0 ; i--){
        int cnt = 0;
        for(int j=i+1 ; j<n ; j++){
            if(a[j]>a[i]) cnt = max(cnt,dp[j]);
        }
        dp[i] = cnt+1;
    }

    int ans = 0;
    for(int i=0 ; i<n ; i++) ans = max(ans,dp[i]);
    //LIS end
    

}
int main(){
    
    IOS;
    int tc=1;
    //cin>>tc;
    while(tc--){
        solve();
    }
 
}