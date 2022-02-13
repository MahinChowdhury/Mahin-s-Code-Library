#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int BS(vector<int>a,int n,int tar){
    
    int lo=0,hi=n,ans=-1;
    
    while(lo<hi){
        int mid = lo + (hi-lo)/2;
        if(tar >= a[mid]){
            lo = mid+1;
            ans = lo;
        }
        else hi = mid;
    }
    return ans;

}

void solve(){

    //Start writing your code from here.

}
int main(){
    
    IOS;
    int tc=1;
    //cin>>tc;
    while(tc--){
        solve();
    }
 
}