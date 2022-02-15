#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int BS(vector<int>a,int n,int tar){
    
    int left=0,right=n-1;
    
    while(left<right){
        int mid = left + (right-left)/2;
        if(property(mid)){
            right = mid;
        }
        else left = mid+1;
    }
    return left;

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