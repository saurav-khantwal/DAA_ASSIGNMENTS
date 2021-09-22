#include <iostream>
using namespace std;
int inversions=0;
int comparisons=0;

void merge(int a[],int l,int mid,int r)
{
    int i,j,k,nl,nr;
    nl=mid-l+1;
    nr=r-mid;
    int left[nl],right[nr];
    for(i=0;i<nl;i++)
    {
        left[i]=a[l+i];
    }

    for(j=0;j<nl;j++)
    {
        right[j]=a[mid+1+j];
    }

    i=0;j=0;k=l;
    while(i<nl && j<nr)
    {   
        comparisons++;
        if(left[i] <= right[j])
        {
            a[k++]=left[i++];
        }
        else
        {
            a[k++]=right[j++];
            inversions++;
        }
    }

    while(i<nl)
    {
        a[k++]=left[i++];
    }

    while(j<nr)
    {
        a[k++]=right[j++];
    }
}



void mergesort(int a[],int l,int r)
{   
    if(l<r)
    {
        int mid=l+(r-l)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);

    }
}


int main() {
    int t;
    cout<<"Input the number of test cases"<<endl;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"\nInput the size of the Array"<<endl;
        cin>>n;
        int a[n];
        cout<<"Input the arrays elements"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        mergesort(a,0,n-1);
        cout<<"Sorted array = ";
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        cout<<"The number of comparisons = "<<comparisons<<endl;
        cout<<"The number of inversions = "<<inversions<<endl;
        comparisons=inversions=0;
    }

    return 0;
}