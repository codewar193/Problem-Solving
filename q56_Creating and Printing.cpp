vector<vector<int>> printAdjacency(int n, int m, vector<vector<int>>& edges) {
    vector<vector<int>> adjList(n + 1);

    for (int i = 0; i < m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    //print output format

   vector<vector<int>>adj(n);

   for(int i=0;i<n;i++){
       adj[i].push_back(i);//first push the nodes
       for(int j=0;j<adjList[i].size();j++){
           adj[i].push_back(adjList[i][j]);//push the neighbours
       }
   }

   return adj;
}
