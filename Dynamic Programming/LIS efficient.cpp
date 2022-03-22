#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define INF 1000000007

int LIS(vector<int>a){

    int len;
    cin>>len;

    vector<int>d(len+1,INF);
    d[0] = -INF;
    for(int i=0 ; i<n ; i++){
        int j = upper_bound(d.begin(),d.end(),a[i])-d.begin();
        if(d[j-1]<a[i] && a[i]<d[j]) d[j] = a[i];
    }

    int ans = 0;
    for(int i=0 ; i<=n ; i++){
        if(d[i]<INF) ans = i;
    }

    return ans;
}

void solve(){

    //Start your code from here.    

}
int main(){
    
    IOS;
    int tc=1;
    //cin>>tc;
    while(tc--){
        solve();
    }
 
}