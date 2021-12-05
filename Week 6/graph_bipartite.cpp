#include<bits/stdc++.h>
using namespace std;



bool bfs(vector<int> graph[], int n)
{
    if(n%2 != 0)
    {
        return false;
    }

    int color[n] = {0};
    queue<int> q;
    int c = 1;
    color[0] = c;
    q.push(0);

    while(!q.empty())
    {
        int curr = q.front();
        q.pop();
        c = color[curr]*-1;
        
        for(int i = 0; i<n; i++)
        {
            int x = graph[curr][i];
            if(x == 0)
            {
                continue;
            }
            if(!color[i])
            {
                color[i] = c;
                q.push(i);
            }
            else if(color[i] != c)
            {
                return false;
            }
        }
    }
    return true;
}


int main()
{
    int t;
    cout<<"Enter the test cases"<<endl;
    cin>>t;
    while(t--)
    {   
        int n;
        cout<<"Enter the number of nodes"<<endl;
        cin>>n;
        vector<int> graph[n];
        cout<<"Enter the values inside adjacancy list"<<endl;
        int x;
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                cin>>x;
                graph[i].push_back(x);
            }
        }

        if(bfs(graph, n))
        {
            cout<<"The graph is bipartite"<<endl;
        }
        else
        {
            cout<<"The graph is not bipartite"<<endl;
        }
    }
}