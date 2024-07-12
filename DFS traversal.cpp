/// DFS undirected graph tarversal
/// Time complexity - O(vertex+edges)

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

vector<int> graph[N];
bool visited[N];

void dfs(int vertex)
{
    /// take action on vertex after entering the vertex
   // if(visited[vertex]) return;
    cout<<vertex<<endl;
    visited[vertex]=true;
    for(auto child:graph[vertex])
    {
        cout<<"parent"<<" "<<vertex<<"  Child "<<child<<endl;
        /// take action on child after entering the child node
        if(visited[child])
            continue;

        dfs(child);

        /// Take action on child after exiting the child node

    }

    /// Take action on vertex before exiting the verte


}



int main()
{
    int vertex,edges;
    cin>>vertex>>edges;

    for(int i=0; i<edges; i++)
    {
        int v1,v2;
        cin>>v1>>v2;

        graph[v1].push_back(v2);
        graph[v1].push_back(v2);
    }

    dfs(1);



    return 0;
}
