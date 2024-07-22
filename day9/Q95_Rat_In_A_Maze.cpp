// User function template for C++

class Solution{
    public:
     int dx[4] = {0,0,-1,1};
    int dy[4] = {1,-1,0,0};
    char move[4] ={'R','L','U','D'};
    using vvi = vector<vector<int>>;
    using vvb = vector<vector<bool>>;
    bool isValid(int r, int c, vvi &m , vvb&vis, int n){
        if(r>=0 && c>=0 && r<n && c<n && m[r][c]==1 && !vis[r][c]) return true;
        return false;
    }
    void bfs(vvi &m, int n, vvb &vis, int r, int c, vector<string>&path, string op){
        if(r==n-1 && c==n-1){
            path.push_back(op);
            return;
        }
        for(int i=0;i<4;i++){
            int nr = r+dx[i];
            int nc = c+dy[i];
            char dir = move[i];
            if(isValid(nr,nc,m,vis,n)){
                vis[nr][nc] = true;
                bfs(m,n,vis,nr,nc,path,op+dir);
                vis[nr][nc] = false;
            }
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
         vector<vector<bool>>vis(n+1, vector<bool>(n+1, false));
        vis[0][0] = true;
        vector<string>path;
        string op ="";
        if(m[0][0]== 0) return path;
        bfs(m,n,vis,0,0,path,op);
        return path;
    }
};

    