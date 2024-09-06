class Solution
{
	public:
	
	  void dfs(int node,int visited[],vector<int> adj[],stack<int>&st)
	  {
	      visited[node]=1;
	      
	      for(auto it:adj[node])
	      {
	          if(!visited[it])
	          {
	              dfs(it,visited,adj,st);
	          }
	      }
	      
	      st.push(node);
	  }
	//Function to return list containing vertices in Topological order. 
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    int visited[V]={0};
	    
	    stack<int> st;
	    
	    for(int i=0; i<V; i++)
	    {
	        if(!visited[i])
	        {
	            dfs(i,visited,adj,st);
	        }
	    }
	    
	    vector<int> ans;
	    
	    while(!st.empty())
	    {
	        ans.push_back(st.top());
	        st.pop();
	    }
	    
	    return ans;
	}
};
