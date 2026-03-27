#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool visit[1005];
void bfs(int src){
    queue<int> q;
    q.push(src);

    while(!q.empty()){
        int par = q.front();
        q.pop();

        cout << par << " ";
        for(int child : adj_list[par]){
            cout << child << " ";
        }
    }
}
int main(){
    int n,e;
    cin >> n >> e;
    
    while (e--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    bfs(0);
    return 0;
}