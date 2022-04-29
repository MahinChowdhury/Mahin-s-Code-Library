#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define N 100003
#define INF 1e18

vector<ll>adj[N],dis(N);
int n,m;
map<pair<ll,ll>,ll>val;

void djikstra(){

    priority_queue<pair<ll,ll>,vector<pair<ll,ll>> , greater<pair<ll,ll>> > q;

    for(int i=0 ; i<=n ; i++) dis[i] = INF;
    q.push({0,1});
    dis[1] = 0;

    while(!q.empty()){
        if(q.top().first>dis[q.top().second]){ q.pop(); continue;}
        ll v = q.top().second,w=q.top().first;
        q.pop();
        for(auto u:adj[v]){
            if(w+val[{u,v}] < dis[u]){
                dis[u] = w+val[{u,v}];
                q.push({dis[u],u});
            }
        }
    }
}

void solve(){

    cin>>n>>m;

    for(int i=0 ; i<m; i++){
        int x,y,w;
        cin>>x>>y>>w;

        adj[x].push_back(y);
        adj[y].push_back(x);
        val[{x,y}] = w;
        val[{y,x}] = w;

    }

}
int main(){
    
    IOS;
    int tc=1;
    //cin>>tc;
    while(tc--){
        solve();
    }
 
}
