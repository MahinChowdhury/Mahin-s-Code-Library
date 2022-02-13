#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int nCr(int n, int r){
    
    int res = 1;
    for(int i=n-r+1 ; i<=n; i++)
        res *= i;
    for(int i=2 ; i<=r ; i++)
        res /= i;

    return res;
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