#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define N 1000
#define INF 1e16

vector<pair<ll,ll>>adj[N];
ll dis[N];

void Djikstra(int s, int n){

    for(int i=0 ; i<=n ; i++) dis[i] = INF;
    
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>, greater<pair<ll,ll>> >q;

    q.push({0,s});
    dis[s] = 0;

    while(!q.empty()){
        
        int v = q.top().second;
        int costP = q.top().first; // Cost of parents
        q.pop();

        if(costP > dis[v]) continue;

        for(auto e:adj[v]){
            
            int u = e.first;
            int w = e.second; // Cost of leaf

            if(costP+w < dis[u]){
                //Relaxation here.
                dis[u] = costP+w;
                q.push({dis[u],u});
            }

        }

    }


}


void solve(){

    for(int i=0 ; i<N ; i++){
        adj[i].clear();
    }

    int n,m;
    cin>>n>>m;

    for(int i=0 ; i<m ; i++){
        int x,y,w;
        cin>>x>>y>>w;
        adj[x].push_back({y,w});
        adj[y].push_back({x,w});
    }

    int t;cin>>t;    
    Djikstra(t,n);

}
int main(){
    
    IOS;
    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }
 
}
