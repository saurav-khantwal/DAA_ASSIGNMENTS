#include <iostream>
using namespace std;

void swap(int *a,int i,int j)
{
    int temp=*(a+i);
    *(a+i)=*(a+j);
    *(a+j)=temp;
}

bool Problem_3(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(a+j)<*(a+i))
            {
                swap(a,i,j);
            }
        }
    }

    for(int i=0;i<n-1;i++)
    {
        if(*(a+i)==*(a+i+1))
        {
            return true;
        }
    }
    return false;

}

int main() 
{
    int t;
    cout<<"Enter the Number of test cases"<<endl;
    cin>>t;
    while(t)
    {
        int a[100];
        int n;
        cout<<"Enter the size of the Array"<<endl;
        cin>>n;
        cout<<"Enter the elements inside the array"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(Problem_3(a,n))
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
        t--;
    }
}