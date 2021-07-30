#include <iostream>
using namespace std;

bool Problem_2(int *a,int n,int key)
{   
    int count=0;
    int start=0;
    int end=n-1;
    while(start<=end)
    {   
        count++;
        int mid=start+(end-start)/2;
        if(*(a+mid)==key)
        {
            cout<<"The number of comparisons taken = "<<count<<endl;
            return true;
        }
        else if(key>*(a+mid))
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    cout<<"The number of comparisons = "<<count<<endl;
    return false;
}



int main()
{   
    int t;
    cout<<"Enter the number of test cases"<<endl;
    cin>>t;
    while(t)
    {

        int a[100];
        int key;
        int n;
        cout<<"Enter the size for the array"<<endl;
        cin>>n;
        cout<<"Enter the sorted elements inside the array"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"Enter the key to find in the array"<<endl;
        cin>>key;
        if(Problem_2(a,n,key))
            cout<<"The element is present inside the array\n"<<endl;
        else
        {
            cout<<"The element is not present inside the array\n"<<endl;
        }

        t--;
    }
    return 0;
}