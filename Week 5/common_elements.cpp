#include<bits/stdc++.h>
using namespace std;

vector<int> common_elements(int *a, int *b, int n1, int n2)
{
    unordered_set<int> x;
    vector<int> res;
    for(int i = 0; i < n1; i++)
    {
        x.insert(a[i]);
    }

    for(int i = 0; i < n2; i++)
    {
        if(x.find(b[i]) != x.end())
        {
            res.push_back(b[i]);
            x.erase(b[i]);
        }
    }

    return res;
}

int main()
{
    int t;
    cout<<"Enter test cases"<<endl;
    cin>>t;
    while(t--)
    {   
        int n1, n2;
        cout<<"Enter sizes of both the arrays respectively"<<endl;
        cin>>n1>>n2;
        int a[n1], b[n2];
        for(int i = 0; i < n1; i++)
        {
            cin>>a[i];
        }

        for(int i = 0; i < n2; i++)
        {
            cin>>b[i];
        }
        vector<int> res = common_elements(a, b, n1, n2);
        if(res.size() == 0)
        {
            cout<<"No common elements"<<endl;
        }
        else
        {
            for(auto itr : res)
            {
                cout<<itr<<" ";
            }
        }
    }
}