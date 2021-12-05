#include <bits/stdc++.h>
using namespace std;

int path = 0;

void DFS(vector<int> graph[], bool *visited, int src, int des)
{   
    visited[src] = true;
    if(src == des)
    {
        path = 1;
        return ;
    }
    
    for(auto nbr : graph[src])
    {
        if(!visited[nbr])
            DFS(graph, visited, nbr, des);
    }

}


// void print_graph(vector<int> graph[], int n)
// {
//     for(int i = 0; i < n; i++)
//     {   
//         cout<<"For node"<<i<<endl;
//         for(auto nbr : graph[i])
//         {
//             cout<<nbr<<' ';
//         }
//         cout<<endl;
//     }
// }


int main()
{
    int t, n;
    cout << "Enter test cases" << endl;
    cin >> t;
    while (t--)
    {
        int s, d;
        cout << "Enter the number of nodes" << endl;
        cin >> n;
        int a[n][n];
        cout << "Input the adjacency Matrix" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        // Adjacency list can be made by using vector and storing 0's and 1's to make an edge

        cout<<"Enter the source and destination"<<endl;
        cin>>s>>d;

        // Converting adjacency matrix to graph form using vector

        vector<int> graph[n];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(a[i][j] == 1)
                {
                    graph[i].push_back(j);
                }
            }
        }

        // print_graph(graph, n);

        // Inititalizing visited array

        bool visited[n];

        for(int i = 0; i < n; i++)
        {
            visited[i] = false;
        }

         // using dfs to check if path exists

        DFS(graph, visited, s-1, d-1);

        if(path == 1)
        {
            cout<<"Path exists"<<endl;
        }
        else
        {
            cout<<"Path doesnot exist"<<endl;
        }
        path = 0;

    }
}