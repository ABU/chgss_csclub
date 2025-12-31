#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // 鄰接表
    vector< vector<int> > graph(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v;
        cout <<"please enter u v: ";
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    // 記錄每個節點被感染的時間
    vector<int> dist(n + 1, -1);
    queue<int> q;

    // 從節點 1 開始
    dist[1] = 0;
    q.push(1);

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        // 傳統 for 走訪鄰居
        for (int i = 0; i < graph[cur].size(); i++) {
            int next = graph[cur][i];
            if (dist[next] == -1) {
                dist[next] = dist[cur] + 1;
                q.push(next);
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (dist[i] == -1) {
            cout << -1 << endl;
            return 0;
        }
        if (dist[i] > ans) {
            ans = dist[i];
        }
    }

    cout << "the ans is "<<ans << endl;
    return 0;
}

