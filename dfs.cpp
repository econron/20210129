#include <algorithm>
#include <iostream>

using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;
vector<int> first_order;
vector<int> last_order;

void dfs(const Graph &G, int v, int& first_ptr, int& last_ptr){
    // 行きがけ順をインクリメントしながらメモ
    first_order[v] = first_ptr++;

    seen[v] = true;
    for(auto next_v : G[v]){
        if(seen[next_v]) continue;
        dfs(G, next_v, first_ptr, last_ptr);
    }
    
    // 帰りがけ順をインクリメントしながらメモ
    last_order[v] = last_ptr++;
}

