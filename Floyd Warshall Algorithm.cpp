class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
	    // Matrix[i][j] denotes the weight of the edge from i to j
	    int n=matrix.size();
	    int m=matrix[0].size();
	    
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<m; j++)
	        {
	            if(matrix[i][j]==-1)
	            {
	                matrix[i][j]=1e9;
	            }
	            if(i==j)
	            {
	                matrix[i][j]=0;
	            }
	        }
	    }
	    
	    for(int k=0; k<n; k++)
	    {
	        for(int i=0; i<n; i++)
	        {
	            for(int j=0; j<m; j++)
	            {
	                matrix[i][j]=min(matrix[i][j], matrix[i][k]+matrix[k][j]);
	            }
	        }
	    }
	    
	    
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<m; j++)
	        {
	            if(matrix[i][j]<0)
	            {
	                cout<<"negative weighted cycle detected"<<endl;
	            }
	        }
	    }
	    
	    
	    
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<m; j++)
	        {
	            if(matrix[i][j]==1e9)
	            {
	                // no path exists from node i to node j
	                matrix[i][j]=-1;
	            }
	        }
	    }
	    
	}
};
