#include<bits/stdc++.h>
using namespace std;
#define N 100009

vector<int> g[N];
int dis[N];
bool vis[N];

void bfs(int u) {
    queue<int> q;
    q.push(u);
    vis[u] = true;         // IMPORTANT: mark start node visited

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int v : g[cur]) {
            if (!vis[v]) {
                vis[v] = true;
                dis[v] = dis[cur] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    return 0;
}
