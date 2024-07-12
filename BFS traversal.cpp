/// BFS traversal
/// time complexity - O(node+edges)

#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;

bool visited[N];

vector<int> graph[N];

int level[N];

void bfs(int source)
{
    queue<int> q;
    q.push(source);
    visited[source]=true;

    while(!q.empty())
    {
        int curr_source=q.front();
        q.pop();
        cout<<curr_source<<" ";
        for(auto child:graph[curr_source])
        {
            if(visited[child])
                continue;
            q.push(child);
            visited[child]=true;
            level[child]=level[curr_source]+1;

        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;

    for(int i=0; i<e; i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    bfs(1);

    cout<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<i<<" "<<level[i]<<endl;
    }



    return 0;
}
/*
13 12
1 2
1 3
1 13
2 5
5 6
5 7
5 8
8 12
3 4
4 9
4 10
10 11

*/
