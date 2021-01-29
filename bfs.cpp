#include <iostream>
#include <vector>
using namespace std;

using Graph = vector<vector<int>>;

int main(){
    int N, M;
    cin >> N >> M;

    Graph G(N);
    for(int i = 0; i < M; i++){
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<int> dist(N, -1);
    quece<int> que;

    // 初期条件
    dist[0] = 0;
    que.push(0);

    // BFS開始
    while(!que.empty()){
        int v = que.front();
        que.pop();
    }

    // give up!!

}
