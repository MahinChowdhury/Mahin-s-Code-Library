#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define N 10000003

bool p[10000007];
vector<int>pr;

void sieve(){

    for(int j=2 ; j<=N ; j++) p[j] = 1;

    for(int x=2 ; x*x<=N ; x++){
        if(p[x]){
            for(int i=x*x ; i<=N ; i+=x) p[i] = 0;
        }
    }

    pr.push_back(2);
    for(int i=3 ; i<=N ; i+=2){
        if(p[i]) pr.push_back(i);
    }
}

long long SOD(long long n){
    
    long long sum = 1;
    
    for(long long u:pr){

        if(u*u>n) break;

        if(n%u==0){
            long long pw=1;
            while(n%u==0){
                n/=u;
                pw *= u;
            }
            pw *= u;
            sum *= (pw-1)/(u-1);
        }
    }
    
    if(n>1) sum *= (n+1);

    return sum;
}

void solve(){

    //Write you code from here.
   
}
int main(){
    
    IOS;
    sieve();
    int tc=1;
    //cin>>tc;
    while(tc--){
        solve();
    }
 
}