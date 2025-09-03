// 2025/09/03 20:41:18

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
bool bfs(int n, int m)
{
    queue<int> q;
    unordered_set<int> visited;
    q.push(n);
    visited.insert(n);

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        if (cur == m)
            return true;

        // Possible moves
        int next1 = cur * 2;
        int next2 = cur - 1;

        if (next1 <= m && !visited.count(next1))
        {
            q.push(next1);
            visited.insert(next1);
        }
        if (next2 >= 0 && !visited.count(next2))
        {
            q.push(next2);
            visited.insert(next2);
        }
    }
    return false;
}
bool dfs(int current, int m)
{
    if (current == m)
        return true;
    if (current > m || current < 0)
        return false;

    return dfs(current * 2, m) || dfs(current - 1, m);
}
int minOperations(int n, int m)
{
    queue<pair<int, int>> q;
    unordered_set<int> visited;

    q.push({n, 0});
    visited.insert(n);

    while (!q.empty())
    {
        int cur = q.front().first;
        int steps = q.front().second;
        q.pop();

        if (cur == m)
            return steps;

        int next1 = cur * 2;
        if (next1 <= 2 * m && !visited.count(next1))
        {
            q.push({next1, steps + 1});
            visited.insert(next1);
        }

        int next2 = cur - 1;
        if (next2 >= 0 && !visited.count(next2))
        {
            q.push({next2, steps + 1});
            visited.insert(next2);
        }
    }
    return -1;
}
void soln()
{
    int n, m;
    cin >> n >> m;
    cout << minOperations(n, m);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    soln();
    return 0;
}