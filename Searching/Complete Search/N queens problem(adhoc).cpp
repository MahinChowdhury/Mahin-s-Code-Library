#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define N 8
 
int n;
ll cnt = 0;
int col[N+2],dig1[N+2],dig2[N+2];
char s[N+2][N+2];
 
void search(int y){
    if(y==n){
        cnt++;
        return;
    }
    for(int x=0 ; x<n ; x++){
        if(col[x] || dig1[x+y] || dig2[x-y+n-1] || s[x][y]=='*') continue;
 
        col[x] = dig1[x+y] = dig2[x-y+n-1] = 1;
        search(y+1);
        col[x] = dig1[x+y] = dig2[x-y+n-1] = 0;
    }
}
 
 
void solve(){
    
    cin>>n;
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++) cin>>s[i][j];
    }
    
    search(0);
    cout<<cnt<<endl;
 
}
int main(){
    
    IOS;
    int tc=1;
    //cin>>tc;
    while(tc--){
        solve();
    }
 