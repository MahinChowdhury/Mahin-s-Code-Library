#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int BS(vector<int>a,int n,int tar){
    
    int lo=0,hi=n,ans=-1;
    
    while(lo<hi){
        int mid = lo + (hi-lo)/2;
        if(a[mid]<tar){ // then look to the right
            lo = mid+1;
        }
        else hi = mid;
    }

    return lo;

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