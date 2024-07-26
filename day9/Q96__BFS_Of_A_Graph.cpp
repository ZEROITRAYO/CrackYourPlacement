
void bfs(vector<vector<int> >& adjList, int startNode,       vector<bool>& visited)
{

    queue<int> q;

    visited[startNode] = true;
    q.push(startNode);

    while (!q.empty()) {

        int currentNode = q.front();
        q.pop();
        cout << currentNode << " ";

        for (int neighbor : adjList[currentNode]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}