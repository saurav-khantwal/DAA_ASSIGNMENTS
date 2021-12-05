#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int find_pair(int *a, int n, int sum)
{
    sort(a, a + n);
    int start = 0;
    int end = n-1;
    vector<pair<int, int>> res;
    int flag =0;
    int i = 0;

    while(start < end)
    {   
        if(a[start] + a[end] == sum)
        {   
           res.push_back(make_pair(a[start], a[end]));
           start++;
           end--;
           flag = 1;
        }

        else if(a[start] + a[end] < sum)
        {
            start++;
        }
        
        else
        {
            end--;
        }
    }

    if(res.size() == 0)
    {
        cout<<"No such pair exists"<<endl;
    }

    else
    {
        for(int i = 0; i < res.size(); i++)
        {
            cout<<res[i].first<<", "<<res[i].second<<endl;
        }
    }

}

int main()
{
    int t;
    cout<<"Enter the number of test cases"<<endl;
    cin>>t;
    while(t--)
    {
        int n, sum;
        cout<<"Enter the size for the array"<<endl;
        cin>>n;
        int a[n];
        cout<<"Enter the values inside the array"<<endl;
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        cout<<"Enter the value of sum"<<endl;
        cin>>sum;
        find_pair(a, n, sum);
    }
}