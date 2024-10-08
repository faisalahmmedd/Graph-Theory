class Solution {
  public:
    /*  Function to implement Bellman Ford
    *   edges: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
         
         vector<int> distance(V,1e8);
         
        // V=number of nodes in the graph
       // S=the source node 
         
         distance[S]=0;
         
         for(int i=0; i<V-1; i++)
         {
             for(auto it:edges)
             {
                 int u=it[0];
                 int v=it[1];
                 int wt=it[2];
                 if(distance[u]!=1e8 && distance[u]+wt<distance[v])
                 {
                     distance[v]=distance[u]+wt;
                 }
             }
         }
         
         
         /// checks if there any negative cycle exists
         for(auto it:edges)
         {
             int u=it[0];
             int v=it[1];
             int wt=it[2];
              if(distance[u]!=1e8 && distance[u]+wt<distance[v])
                 {
                     // Negative cycle exits
                     return {-1};
                 }
         }
         return distance;
    }
};
