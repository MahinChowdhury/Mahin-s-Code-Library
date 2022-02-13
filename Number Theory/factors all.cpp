#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod 1000000007

vector<int>factors (int n) {
    vector<int>fac;

    for(int i=1 ; i*i<=n ; i++){
        if(n%i==0){
            fac.push_back(i);
            if(n/i!=i) fac.push_back(n/i);
        }
    }

    //sort(fac.begin(),fac.end());
    
    return fac;
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