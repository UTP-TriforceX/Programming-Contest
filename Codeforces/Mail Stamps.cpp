#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);

    int n;
    cin>>n;
    int a,b;
    map<int,vector<int> > G;
    map<int,int> apariciones;

    for(int i=0; i<n;i++){
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    int inicio = 0;
    for(map<int,vector<int> >::iterator it=G.begin();it!=G.end();it++){
        if(it->second.size()==1){
            inicio = it->first;
            break;
        }
    }
    //DFS
    map<int,bool> visitados;
    stack<int> S;
    S.push(inicio);
    while(!S.empty()){
        cout<<S.top()<<" ";
        int tmp = S.top();
        S.pop();
        visitados[tmp] = true;
        for(int i=0;i<G[tmp].size();i++){
            int curr = G[tmp][i];
            if(visitados[curr])continue;
            S.push(curr);
        }
    }
    cout<<endl;
}