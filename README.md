# Graph_BFS

## 🔍 Breadth-First Search (BFS) Traversal of a Graph

This implementation performs **Breadth-First Search (BFS)** on an **undirected graph** using an adjacency list representation. The traversal starts from **node 1** (assuming 1-based indexing), visits all reachable nodes level-by-level, and returns the order of traversal.

### ✅ How It Works

1. **Initialization:**

   * A `visited` array (`vis`) is created to keep track of nodes that have already been explored.
   * A `queue` is used to implement BFS, which ensures nodes are processed in the order they are discovered (FIFO).
   * The BFS starts from node `1`, which is marked visited and added to the queue.

2. **BFS Loop:**

   * While the queue is not empty:

     * The front node is removed from the queue and added to the result list (`bfsResult`).
     * All its unvisited neighbors (from the adjacency list) are marked visited and added to the queue.

3. **Traversal Order:**

   * Nodes are visited in the exact order they are discovered, moving level-by-level from the starting node.

### 📦 Example

Given this undirected graph:

```
1 -- 2
|    |
4 -- 3
```

Adjacency list:

```cpp
adj = {
    {},        // 0th index unused (1-based indexing)
    {2, 4},    // 1 is connected to 2 and 4
    {1, 3},    // 2 is connected to 1 and 3
    {2, 4},    // 3 is connected to 2 and 4
    {1, 3}     // 4 is connected to 1 and 3
};
```

**BFS traversal starting from node 1:**

```
[1, 2, 4, 3]
```

### 💡 Key Concepts

* **Queue**: Ensures breadth-first (level-wise) exploration.
* **Visited Array**: Prevents re-visiting nodes and infinite loops.
* **Adjacency List**: Efficient way to represent sparse graphs.

---

### 📌 Code Snippet (BFS Loop Only)

```cpp
while (!q.empty()) {
    int node = q.front();
    q.pop();
    bfsResult.push_back(node);

    for (auto it : adj[node]) {
        if (!vis[it]) {
            vis[it] = 1;
            q.push(it);
        }
    }
}
```

This loop processes each node in the queue, explores its unvisited neighbors, and appends them for future traversal — which is the core idea behind BFS.


