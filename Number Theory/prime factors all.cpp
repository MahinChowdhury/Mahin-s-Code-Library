#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod 1000000007

vector<int>p_factors(int n){

    vector<int>f;

    for(int x=2 ; x*x<=n ; x++){
        while(n%x==0){
            f.push_back(x);
            n/=x;
        }
    }

    if(n>1) f.push_back(n);

    return f; 
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