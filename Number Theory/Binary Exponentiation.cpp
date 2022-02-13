#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod 1000000007

long long pow_mod(long long a, long long b){

    a %= mod;
    long long res = 1;
    while(b){
        if(b&1) res = (res*a)%mod;
        a = (a*a)%mod;
        b/=2;
    }
    
    return res%mod;
}

void solve(){

    //Write you code from here.
   
}
int main(){
    
    IOS;
    int tc=1;
    //cin>>tc;
    while(tc--){
        solve();
    }
 
}