#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define N 200003
#define mod 1000000007

long long fac[N+2];

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

void facgen(){
    fac[0] = 1;
    for(long long i=1 ; i<=N ; i++) fac[i] = (i*fac[i-1])%mod;
}

long long nCr(long long n, long long r){

    if(r>n) return 0;

    long long ret = fac[n];
    ret = (ret * pow_mod(fac[r],mod-2))%mod;
    ret = (ret * pow_mod(fac[n-r],mod-2))%mod;

    return ret;
}


void solve(){

    //Write you code from here.
   
}
int main(){
    
    IOS;
    facgen();
    int tc=1;
    //cin>>tc;
    while(tc--){
        solve();
    }
 
}