class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int n = adj.size();
        vector<int> vis(n+1,0);
        queue<int> q;
        vector<int> bfsResult;
        
        vis[1]=1;
        q.push(1);
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfsResult.push_back(node);
            for(auto it: adj[node]){
                if(vis[it]==0){
                    q.push(it);
                    vis[it]=1;
                }
            }
        }
        return bfsResult;
        
        
    }
};