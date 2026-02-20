#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e;
    cin >> n >> e;
    int adj_mat[n][n];
    //Intial all value by 0;
    memset(adj_mat,0,sizeof(adj_mat));
    // Repleas all dayagonal value by 1;
    for(int r = 0; r < n; r++){
        for(int t = 0; t < n; t++){
            if(r == t){
                adj_mat[r][t] = 1;
            }
        }
    }

    // Input for graph
    for(int f = 0; f < e; f++){
        int a,b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
        adj_mat[b][a] = 1; // This line for Undirected graph
    }
    for(int k = 0; k < n; k++){
        for(int l =0; l < n; l++){
            cout << adj_mat[k][l] << " " ;
        }
        cout << endl;
    }

}